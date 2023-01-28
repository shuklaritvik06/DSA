#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> b;
    b.insert(10);
    b.insert(20);
    multiset<int, greater<int>> c;
    c.emplace(10);
    c.emplace(30);
    multiset<int, greater<int>>::iterator itr;
    for (itr = c.begin(); itr != c.end(); ++itr)
        cout << *itr << " ";
    int num = c.erase(30);
    cout << num << endl;
    cout << c.empty();
    return 0;
}