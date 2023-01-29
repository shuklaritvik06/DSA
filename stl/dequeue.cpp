// Allows operations both at the front and back
// Insertion or removal -> O(N)
#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(30);
    dq.push_back(50);
    cout << dq.size() << endl;
    cout << dq.max_size() << endl;
    cout << dq.at(2) << endl;
    cout << dq.front() << endl;
    cout << dq.back() << endl;
    dq.pop_back();
    dq.pop_front();
    dq.insert(dq.begin(), 5);
    dq.insert(dq.begin(), 2, 0);
    vector<int> vect{1, 2, 3, 4, 5};
    dq.insert(dq.begin(), vect.begin(), vect.end());
    dq.assign(5, 19);
    dq.resize(5);
    dq.emplace_back(9);
    dq.emplace_front(10);
    for (auto i : dq)
    {
        cout << i;
    }
    return 0;
}