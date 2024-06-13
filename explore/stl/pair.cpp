#include <iostream>
using namespace std;
int main()
{
    pair<int, int> p = {1, 2};

    cout << p.first << " " << p.second << " ";

    pair<int, pair<int, int>> q = {1, {2, 3}};

    cout << q.first << " " << q.second.first << " " << q.second.second << " ";

    pair<int, int> A[] = {{1, 2}, {3, 4}, {5, 6}};

    for (int i = 0; i < 3; i++)
    {
        cout << A[i].first << " ";
    }

    // make_pair()
    pair<int, int> pair3;
    pair3 = make_pair(1, 5);
    // swap
    pair3.swap(p);
    // tie
    tie(a, b) = p;
    return 0;
}
