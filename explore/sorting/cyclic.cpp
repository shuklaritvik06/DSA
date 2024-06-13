#include <iostream>
using namespace std;
// 1 5 2 3 4
// Best Case -> O(n)
// Worst Case -> O(n)
int *sort(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        int correct = arr[i] - 1;
        if (arr[correct] != arr[i])
        {
            int temp = arr[i];
            arr[i] = arr[correct];
            arr[correct] = temp;
        }
    }
    return arr;
}
int main()
{
    int *result;
    int arr[] = {1, 4, 3, 2, 5};
    result = sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}