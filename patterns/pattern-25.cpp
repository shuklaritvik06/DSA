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
        while (j <= 7)
        {
            /* code */
            if (i <= 4)
            {
                /* code */
                if (j >= 5 - i && j <= 3 + i)
                {
                    /* code */
                    cout << k;
                    j >= 4 ? k-- : k++;
                }
                else
                {
                    cout << " ";
                }
            }
            j++;
        }
        i++;
        ++k;
        cout << endl;
        j = 1;
    }

    return 0;
}