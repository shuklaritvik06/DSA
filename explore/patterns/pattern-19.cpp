//   **********
//   ****  ****
//   ***    ***
//   **      **
//   *        *
//   *        *
//   **      **
//   ***    ***
//   ****  ****
//   **********
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    int k = 1;
    while (i <= 10)
    {
        /* code */
        while (j <= 10)
        {
            /* code */
            if (i > 5 ? ((j <= k) || (j >= 11 - k && j <= 10)) : ((j >= 1 && j <= 6 - i) || (j >= 5 + i && j <= 10)))
            {
                /* code */
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            j++;
        }
        i++;
        i > 6 ? k++ : k;
        j = 1;
        cout << endl;
    }
    return 0;
}