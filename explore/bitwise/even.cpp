#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    if (a & 1)
        cout << "Odd" << endl;
    else
        cout << "Even" << endl;
    return 0;
}