#include <iostream>
using namespace std;
int binarySearch(int a, int b)
{
    int mid;
    while (a <= b)
    {
        mid = a + (b - a) / 2;
        if ((mid * mid) < b)
            a = mid + 1;
        if ((mid * mid) > b)
            b = mid - 1;
        if ((mid * mid) == b)
            break;
    }
    return mid;
}
double squareRoot(int n, int precision)
{
    int lb = 0;
    double ans = binarySearch(lb, n);
    double incre = 0.1;

    for (int i = 0; i < precision; i++)
    {
        while ((ans * ans) <= n)
        {
            ans += incre;
        }
        ans -= incre;
        incre /= 10;
    }
    return ans;
}
double NewtonRaphson(double n)
{
    double x = n;
    double root;
    while (true)
    {
        root = 0.5 * (x + (n / x));
        if (abs(root - x) < 1)
            break;
        x = root;
    }
    return root;
}
int main()
{
    cout << squareRoot(8, 3) << endl;
    cout << NewtonRaphson(8.0);
    return 0;
}