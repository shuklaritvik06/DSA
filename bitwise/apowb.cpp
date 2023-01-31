#include <iostream>
using namespace std;
// O(log(b)) -> As we are running loop to the number of digits times
int calcPower(int base, int power)
{
    int ans = 1;
    while (power > 0)
    {
        if ((power & 1) == 1)
        {
            ans *= base;
        }
        base *= base;
        power = power >> 1;
    }
    return ans;
}
int main()
{
    int base = 2;
    int power = 4;
    cout << calcPower(base, power);
    return 0;
}