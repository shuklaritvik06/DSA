#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> b;
    b["Ritvik"] = 200;
    map<string, int>::iterator it = b.begin();
    while (it != b.end())
    {
        cout << "Key: " << it->first << " Value: " << it->second;
        ++it;
    }
    cout << b.size();
    b.insert(pair<string, int>("Ramesh", 2020));
    map<string, int> c(b.begin(), b.end());
    b.erase(b.begin(), b.find("Ritvik"));
    cout << b.empty();
    cout << b.erase("Ritvik");
    b.emplace(pair<string, int>("Ramesh", 2020));
    map<pair<int, int>, int> mp;
    map<int, int> a;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    auto itr = a.lower_bound(2);
    cout << itr->second;
    itr = a.upper_bound(2);
    cout << itr->second;
    return 0;
}