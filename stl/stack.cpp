// LIFO
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> stack1;
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    while (!stack1.empty())
    {
        cout << stack1.top() << " ";
        stack1.pop();
    }
    stack<int> stack2;
    stack2.push(10);
    stack2.push(40);
    stack2.push(50);
    stack1.swap(stack2);
    cout << stack1.size();
    return 0;
}