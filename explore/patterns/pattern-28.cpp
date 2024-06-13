//      *
//     * *
//    *   *
//   *     *
//  *       *
//   *     *
//    *   *
//     * *
//      *
#include <iostream>
using namespace std;
int main()
{

    int i = 1;
    int j = 1;
    int k = 1;
    while (i <= 9)
    {
        /* code */
        while (j <= 9)
        {
            /* code */
            if (i >= 5 ? (j == k || j == 10 - k) : (j == 6 - i || j == 4 + i))
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
        i > 5 ? k++ : k;
        cout << endl;
    }

    return 0;
}