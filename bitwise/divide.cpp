#include <iostream>
#include <cmath>
using namespace std;
int divide(int x, int y)
{
    return pow(2.0, log2(x) - log2(y));
}
int main()
{
    cout << divide(9, 3);
    return 0;
}