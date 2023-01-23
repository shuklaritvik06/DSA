//    *        *
//    **      **
//    * *    * *
//    *  *  *  *
//    *   **   *
//    *   **   *
//    *  *  *  *
//    * *    * *
//    **      **
//    *        *
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    int rows, cols;
    cin >> rows >> cols;
    int k = 1;
    while (i <= rows)
    {
        /* code */
        while (j <= cols)
        {
            /* code */
            if (i > 5 ? (j == 1 || j == (rows / 2) + 1 - k) : (j == 1 || j == i))
            {
                /* code */
                cout << "*";
            }
            else if (i > 5 ? (j == (rows / 2) + k || j == rows) : (j == rows + 1 - i || j == rows))
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