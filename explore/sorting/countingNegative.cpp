#include <iostream>
using namespace std;
// O(n+k)
// O(k)
int *sort(int *arr, int length)
{
    int max = 0, min = 0;
    for (int i = 0; i < length; i++)
    {
        /* code */
        if (arr[i] > max)
        {
            /* code */
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    int size = max - min + 1;
    int ar[size];
    for (int i = 0; i < size; i++)
    {
        ar[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        ar[i] = 0;
    }
    for (int i = 0; i < length; i++)
    {
        ar[arr[i] - min]++;
    }
    int k = 0;
    int j = 0;
    while (j < size)
    {
        /* code */
        if (ar[j] > 0)
        {
            /* code */
            arr[k] = j + min;
            k++;
            ar[j]--;
        }
        else
        {
            j++;
        }
    }
    return arr;
}
int main()
{
    int *result;
    int arr[] = {-5, -10, 0, -3, 8, 5, -1, 10};
    result = sort(arr, 8);
    for (int i = 0; i < 8; i++)
    {
        /* code */
        cout << result[i] << " ";
    }
    return 0;
}