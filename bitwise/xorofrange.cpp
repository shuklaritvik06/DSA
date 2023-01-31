#include <iostream>
using namespace std;
int calcXORZeroToUB(int n)
{
    int ans = 0;
    if (n % 4 == 0)
        ans = n;
    if (n % 4 == 1)
        ans = 1;
    if (n % 4 == 3)
        ans = 0;
    if (n % 4 == 2)
        ans = n + 1;
    return ans;
}
int calcXORBetweenAandB(int lb, int ub)
{
    return calcXORZeroToUB(ub) ^ calcXORZeroToUB(lb - 1);
}
int main()
{
    cout << calcXORZeroToUB(10) << endl;
    cout << calcXORBetweenAandB(3, 9);
    return 0;
}