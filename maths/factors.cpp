#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> factors(int n)
{
    vector<int> temp;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0 && (i != (n / i)))
        {
            temp.push_back(i);
            temp.push_back(n / i);
        }
        else
        {
            temp.push_back(i);
        }
    }
    sort(temp.begin(), temp.end());
    return temp;
}
int main()
{

    for (auto i : factors(36))
    {
        cout << i << " ";
    }
    return 0;
}