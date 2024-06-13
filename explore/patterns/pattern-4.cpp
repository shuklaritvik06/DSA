#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 1;
    while (i <= 5)
    {
        while (j <= i)
        {
            /* code */
            cout << j;
            j++;
        }
        cout << endl;
        j = 1;
        i++;
    }
}
