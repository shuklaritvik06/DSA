#include <iostream>
using namespace std;
// Time Complexity -> O(n+k)
// Space Complexity -> O(k)
int *sort(int *arr, int length)
{
    int max = 0;
    for (int i = 0; i < length; i++)
    {
        /* code */
        if (arr[i] > max)
        {
            /* code */
            max = arr[i];
        }
    }
    int ar[max + 1];
    for (int i = 0; i < max + 1; i++)
    {
        /* code */
        ar[i] = 0;
    }
    for (int i = 0; i < length; i++)
    {
        /* code */
        ar[arr[i]]++;
    }
    int j = 0;
    int k = 0;
    while (j <= max)
    {
        /* code */
        if (ar[j] != 0)
        {
            /* code */
            arr[k] = j;
            ar[j]--;
            k++;
        }
        else
            j++;
    }
    return arr;
}
int main()
{
    int arr[] = {11, 52, 4, 2, 3, 4};
    int *result;
    result = sort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout << result[i] << " ";
    }
    return 0;
}