// FIFO
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.emplace(24);
    q.back() += 25;
    cout << q.back();
    q.pop();
    cout << q.front();
    cout << q.size();
    return 0;
}