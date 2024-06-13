// Doubly linked list
#include <iostream>
#include <iterator>
#include <list>

using namespace std;
void show(list<int> lis)
{
    list<int>::iterator it = lis.begin();
    for (it; it != lis.end(); ++it)
    {
        cout << *it << " ";
    }
}
int main()
{
    list<int> lis;
    for (int i = 0; i < 10; i++)
    {
        lis.push_back(i * 2);
        lis.push_front(i * 5);
    }
    lis.sort();
    show(lis);
    lis.reverse();
    show(lis);
    lis.pop_back();
    lis.pop_front();
    cout << lis.front();
    cout << lis.back();
    lis.assign(5, 100);
    lis.remove(10);
    lis.emplace_back(10);
    lis.emplace_front(10);
    lis.emplace(lis.begin(), 120);
    lis.clear();
    list<int> lis1;
    lis1.push_back(10);
    lis1.push_back(20);
    lis.splice(lis.end(), lis1);
    list<int>::iterator it = lis.begin();
    advance(it, 2);
    lis1.splice(lis1.end(), lis, it, lis.end());
    lis1.merge(lis);
    return 0;
}