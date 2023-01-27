#include <iostream>
using namespace std;
// Best Case -> O(n)
// Worst Case -> O(n^2)
int *sort(int *arr, int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        /* code */
        int min_index = i;
        for (int j = i + 1; j < length; j++)
        {
            /* code */
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        if (min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
    return arr;
}
int main()
{
    int *result;
    int arr[] = {1,
                 4,
                 5,
                 3,
                 2};
    result = sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << result[i];
    }
    return 0;
}