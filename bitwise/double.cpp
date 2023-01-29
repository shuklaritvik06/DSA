#include <iostream>
using namespace std;
// a<<1 => 2a
// a<<b=> a*2^b
// a>>b => a/2^b
int main()
{
    int a = 5;
    cout << (a << 1);
    int b = 6;
    cout << (a << b);
    cout << (a >> b);
    return 0;
}