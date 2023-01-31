#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int noOfDigit(int n, int base)
{
    return int(log10(n) / log10(base)) + 1;
}
int main()
{
    cout << noOfDigit(5, 2);
    return 0;
}