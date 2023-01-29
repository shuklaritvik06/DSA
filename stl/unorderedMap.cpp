#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> um;
    um["one"] = 1;
    um["two"] = 2;
    um["three"] = 3;
    for (auto x : um)
    {
        cout << x.first << " " << x.second << endl;
    }
    um.insert(make_pair("pi", double(22) / 7));
    if (um.find("pi") == um.end())
        cout << "Not Found!";
    um.erase("pi");
    unordered_map<string, int>::iterator it = um.begin();
    while (it != um.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }
    return 0;
}