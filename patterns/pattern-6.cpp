#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 5)
    {
        int j = 6 - i;
        while (j <= 5)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}