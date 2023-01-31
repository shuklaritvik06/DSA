#include <iostream>
#include <algorithm>
using namespace std;
int lcm(int a, int b)
{
    int max = (a > b) ? a : b;
    while (true)
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }
        max++;
    }
}
int lcm2(int a, int b)
{
    int gcd = __gcd(a, b);
    return (a * b) / gcd;
}
int main()
{
    cout << lcm(4, 16) << endl;
    cout << lcm2(4, 16);
    return 0;
}