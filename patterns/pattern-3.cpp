#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 1;
    while (i <= 5)
    {
        /* code */
        while (j + i <= 6)
        {
            /* code */
            cout << "*";
            j++;
        }
        cout << endl;
        j = 1;
        i++;
    }
}
