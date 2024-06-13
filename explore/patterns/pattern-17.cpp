//   1 1 1 1 1 1
//   2 2 2 2 2
//   3 3 3 3
//   4 4 4
//   5 5
//   6
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    while (i <= 6)
    {
        /* code */
        while (j <= 7 - i)
        {
            /* code */
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
        j = 1;
    }

    return 0;
}