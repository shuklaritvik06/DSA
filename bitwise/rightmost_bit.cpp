#include <iostream>
#include <strings.h>
#include <cmath>
using namespace std;
int rightMostBit(int n)
{
    return log2(n & ~(n - 1)) + 1;
}
int main()
{
    // Rightmost set bit
    cout << rightMostBit(10);
    cout << ffs(20);
    return 0;
}