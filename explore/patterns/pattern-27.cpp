//       *****
//      *   *
//     *   *
//    *   *
//   *****
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
            if (j >= 5 && i == 1)
            {
                /* code */
                cout << "*";
            }
            else if (j <= 5 && i == 5)
            {
                /* code */
                cout << "*";
            }
            else if ((i >= 2 && i <= 4) && (j == 6 - i || j == 10 - i))
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
        j = 1;
        cout << endl;
    }
    return 0;
}
