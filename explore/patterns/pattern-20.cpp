//    E
//    D E
//    C D E
//    B C D E
//    A B C D E
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    int c = 70;
    while (i <= 5)
    {
        /* code */
        c = c - i;
        while (j <= i)
        {
            /* code */
            cout << char(c);
            c++;
            j++;
        }
        i++;
        cout << endl;
        j = 1;
    }
    return 0;
}