//    ****
//    *  *
//    *  *
//    *  *
//    ****
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    while (i <= 6)
    {
        /* code */
        while (j <= 4)
        {
            /* code */
            if (i == 1 || i == 6)
            {
                /* code */
                cout << "*";
            }
            else if (j == 1 || j == 4)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            j++;
        }
        i++;
        cout << endl;
        j = 1;
    }
    return 0;
}