//  * * * * *
//   * * * *
//    * * *
//     * *
//      *
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    int k = 1;
    while (i <= 10)
    {
        while (j <= 9)
        {
            if (i > 5 ? (j >= 6 - k && j <= 4 + k) : (j >= i && j <= 10 - i))
            {
                if (i % 2 != 0 ? (j % 2 == 0) : (j % 2 != 0))
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
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