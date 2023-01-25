//    *        *
//    **      **
//    ***    ***
//    ****  ****
//    **********
//    ****  ****
//    ***    ***
//    **      **
//    *        *
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    int k = 1;
    while (i <= 9)
    {
        /* code */
        while (j <= 10)
        {
            /* code */
            if (i > 5 ? (j >= 1 && j <= 6 - k) : (j >= 1 && j <= i))
            {
                /* code */
                cout << "*";
            }
            else if (i > 5 ? (j >= 5 + k && j <= 10) : (j >= 10 - i && j <= 10))
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
        i > 5 ? k++ : k;
        j = 1;
        cout << endl;
    }
    return 0;
}