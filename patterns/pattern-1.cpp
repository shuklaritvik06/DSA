// *****
// *****
// *****
// *****
// *****
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 1;
    while (i <= 5)
    {
        while (j <= 5)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
        j = 1;
    }
}
