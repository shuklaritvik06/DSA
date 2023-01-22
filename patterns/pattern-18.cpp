//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    int k = 1;
    while (i <= 5)
    {
        /* code */
        k = i;
        while (j <= 9)
        {
            /* code */
            if (j >= 6 - i && j <= 4 + i)
            {
                /* code */
                cout << k;
                j < 5 ? k-- : k++;
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