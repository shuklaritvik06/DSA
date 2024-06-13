#include <iostream>
using namespace std;
class Solution
{
public:
    static int helper(int num, int steps)
    {
        if (num == 0)
        {
            return steps;
        }
        if (num % 2 == 0)
        {
            ++steps;
            num /= 2;
            return helper(num, steps);
        }
        if (num % 2 != 0)
        {
            ++steps;
            num -= 1;
            return helper(num, steps);
        }
        return -1;
    }
    int numberOfSteps(int num)
    {
        return helper(num, 0);
    }
};
int main()
{
    Solution a;
    cout << a.numberOfSteps(14);
}