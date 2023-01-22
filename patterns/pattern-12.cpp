//  * * * * *
//   * * * *
//    * * *
//     * *
//      *
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    while (i <= 5)
    {
        /* code */
        while (j <= 9)
        {
            /* code */
            if ((i % 2 == 0 && j % 2 == 0 || i % 2 != 0 && j % 2 != 0) && j >= i && j <= 10 - i)
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