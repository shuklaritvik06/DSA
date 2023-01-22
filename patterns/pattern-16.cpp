//        *      *
//      *   *  *   *
//    *      *      *
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    while (i <= 3)
    {
        /* code */
        while (j <= 9)
        {
            /* code */
            if ((j == 4 - i || j == 2 + i) || (j == 8 - i || j == 6 + i))
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