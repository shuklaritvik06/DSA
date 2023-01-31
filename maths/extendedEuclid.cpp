#include <iostream>
#include <vector>
using namespace std;
// ax+by = gcd(a,b)
// amodb = a-floor(a/b)*b
vector<int> gcd(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return vector<int>{x, y, a};
    }
    int x1, y1;
    vector<int> result = gcd(b, a % b, x1, y1);
    int d = result[2];
    x = y1;
    y = x1 - y1 * (a / b);
    return vector<int>{x, y, d};
}
int main()
{
    int x, y;
    for (auto i : gcd(55, 80, x, y))
    {
        cout << i << " ";
    }
    return 0;
}