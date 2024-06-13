#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 1;
    int k = 1;
    while (i <= 7)
    {
        /* code */
        i > 4 ? k++ : k;
        while (j <= 7)
        {
            /* code */
            if (i > 4 ? (j >= k && j <= 8 - k) : (j >= 5 - i && j <= 3 + i))
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
        j = 1;
        i++;
        cout << endl;
    }

    return 0;
}