#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 3, 2};
    int unique = 0;
    for (auto i : a)
    {
        unique ^= i;
    }
    cout << unique << " Occurs once";
    return 0;
}