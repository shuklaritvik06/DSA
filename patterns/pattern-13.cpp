//    1
//    2  3
//    4  5  6
//    7  8  9  10
//    11 12 13 14 15
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
        while (j <= i)
        {
            /* code */
            cout << k << " ";
            k++;
            j++;
        }
        i++;
        cout << endl;
        j = 1;
    }
    return 0;
}