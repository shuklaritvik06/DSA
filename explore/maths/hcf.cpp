#include <iostream>
#include <algorithm>
using namespace std;
int HCF(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        if (b > a)
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}
int gcd(int a, int b)
{
    return __gcd(a, b);
}
int gcd2(int a, int b)
{
    if (a == 0)
        return b;
    return gcd2(b % a, a);
}
int main()
{

    cout << HCF(2, 8) << endl;
    cout << gcd(2, 8) << endl;
    cout << gcd2(2, 8);
    return 0;
}