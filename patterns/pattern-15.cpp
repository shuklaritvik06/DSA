//    1
//    0 1
//    1 0 1
//    0 1 0 1
//    1 0 1 0 1
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    int k = 1;
    while (i <= 5)
    {
        if (i % 2 != 0)
            k = 1;
        else if (i % 2 == 0)
            k = 0;
        while (j <= i)
        {
            /* code */
            cout << k << " ";
            k == 0 ? k++ : k--;
            j++;
        }
        i++;
        cout << endl;
        j = 1;
    }
    return 0;
}