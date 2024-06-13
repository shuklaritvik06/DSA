//    E D C B A
//    D C B A
//    C B A
//    B A
//    A
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    while (i <= 5)
    {
        /* code */
        int c = 70 - i;
        while (j <= 6 - i)
        {
            /* code */
            cout << char(c);
            c--;
            j++;
        }
        i++;
        j = 1;
        cout << endl;
    }
    return 0;
}