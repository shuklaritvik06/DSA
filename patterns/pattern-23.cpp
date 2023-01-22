//    1      1
//    12    21
//    123  321
//    12344321
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
        while (j <= 8)
        {
            /* code */
            if (j <= i)
            {
                /* code */
                cout << k;
                k++;
            }
            else if (j >= 9 - i)
            {
                k--;
                cout << k;
            }
            else
            {
                cout << " ";
            }
            j++;
        }
        k = 1;
        j = 1;
        i++;
        cout << endl;
    }
    return 0;
}