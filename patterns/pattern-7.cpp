//      *
//     **
//    ***
//   ****
//  *****
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    while (i <= 5)
    {
        /* code */
        while (j <= 5)
        {
            /* code */
            if (j >= 6 - i)
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
        j = 1;
        i++;
        cout << endl;
    }

    return 0;
}