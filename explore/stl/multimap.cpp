#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
    multimap<int, int> q;
    q.insert(pair<int, int>(3, 130));
    q.insert(pair<int, int>(5, 260));
    q.insert(pair<int, int>(1, 250));
    q.insert(pair<int, int>(7, 110));
    multimap<int, int>::iterator it = q.begin();
    for (it; it != q.end(); it++)
    {
        cout << "Key: " << it->first << "Value: " << it->second;
    }
    int num = q.erase(7);
    cout << "Deleted" << num;
    cout << q.count(1);
    multimap<int, int>::iterator itr = q.find(5);
    cout << "Key: " << itr->first << "Value: " << itr->second;
    return 0;
}