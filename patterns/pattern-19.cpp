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
    while (i <= 10)
    {
        /* code */
        while (j <= 10)
        {
            /* code */
            if (i == 1 || i == 10)
            {
                /* code */
                cout << "*";
            }
            else if (i >= 2 && i <= 9)
            {
                /* code */
            }
            j++;
        }
    }
    return 0;
}