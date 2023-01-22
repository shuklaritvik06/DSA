//    a
//    B c
//    D e F
//    g H i J
//    k L m N o
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    int d = 66;
    int e = 97;
    bool flag = true;
    while (i <= 5)
    {
        while (j <= i)
        {
            /* code */
            if (flag)
            {
                /* code */
                cout << char(e);
                flag = false;
                e = e + 2;
            }
            else
            {
                cout << char(d);
                flag = true;
                d = d + 2;
            }
            j++;
        }
        i++;
        j = 1;
        cout << endl;
    }
    return 0;
}