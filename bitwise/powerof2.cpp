#include <iostream>
//  2's complement give negative of a number
using namespace std;
bool powerOf2(int n)
{
    bool flag = false;
    while (n != 0)
    {
        flag = false;
        if (n == 0)
            break;
        if (n == 1)
        {
            flag = true;
            break;
        }
        else if (n % 2 == 0)
        {
            flag = true;
            n = n / 2;
        }
        else
        {
            break;
        }
    }
    return flag;
}
int main()
{
    int a = 8;
    if (__builtin_popcount(a) == 1)
        cout << "Yes";
    else
        cout << "No";
    if (a & (a - 1))
        cout << "No";
    else
        cout << "True";
    powerOf2(a);
    return 0;
}