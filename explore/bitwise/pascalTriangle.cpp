#include <iostream>
#include <cmath>
using namespace std;
int sumRow(int n)
{
    return pow(2, n - 1);
}
int main()
{
    cout << sumRow(5);
    return 0;
}