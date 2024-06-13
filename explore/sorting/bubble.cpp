#include <iostream>
using namespace std;
// Best Case -> O(n)
// Worst Case -> O(n^2)
int *sort(int *arr, int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        /* code */
        bool swapped = false;
        for (int j = 0; j < length - i; j++)
        {
            /* code */
            if (arr[j] > arr[j + 1])
            {
                /* code */
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    return arr;
}
int main()
{
    int arr[] = {1, 5, 6, 3, 2};
    int *result;
    result = sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << result[i];
    }

    return 0;
}