#include <iostream>
using namespace std;
// Best Case -> O(n)
// Worst Case -> O(n^2)
// n-1 passes
int *sort(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        /* code */
        for (int j = i + 1; j > 0; j--)
        {
            /* code */
            if (arr[j] < arr[j - 1])
            {
                /* code */
                arr[j] = arr[j] ^ arr[j - 1];
                arr[j - 1] = arr[j] ^ arr[j - 1];
                arr[j] = arr[j] ^ arr[j - 1];
            }
        }
    }
    return arr;
}
int main()
{
    int *result;
    int arr[] = {1, 5, 2, 4, 3};
    result = sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << *(result + i);
    }

    return 0;
}