#include <iostream>
using namespace std;
int totalSet(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n & 1)
            count++;
        n = n >> 1;
    }
    return count;
}
int main()
{
    cout << totalSet(5);
    return 0;
}