#include <iostream>
using namespace std;
int main()
{
    // Get the ith bit
    int num = 5;
    int i = 2;
    int mask = 1 << (i - 1);
    cout << (num & mask);
    // Set the ith bit
    cout << (num | mask);
    // Reset the ith bit
    cout << (num & (~mask));
    return 0;
}