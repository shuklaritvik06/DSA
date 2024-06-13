#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        pq.push(arr[i]);
    }
    while (!pq.empty())
    {
        cout << pq.top() << ' ';
        pq.pop();
    }
    cout << pq.size();
    pq.emplace(23);
    return 0;
}