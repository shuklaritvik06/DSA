//   1 2 3 4
//     5 6 7
//       8 9
//        10
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    int k = 1;
    while (i <= 4)
    {
        /* code */
        while (j <= 4)
        {
            /* code */
            if (j == 5)
            {
                /* code */
                cout << " ";
            }
            else if (j >= i && j <= 4)
            {
                /* code */
                cout << k;
                k++;
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