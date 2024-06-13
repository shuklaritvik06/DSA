#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int start, int mid, int end)
{
    int i, j, k;
    int sizeOne = mid - start + 1;
    int sizeTwo = end - mid;
    vector<int> left = vector<int>(sizeOne, 0);
    vector<int> right = vector<int>(sizeTwo, 0);
    for (int i = 0; i < sizeOne; i++)
        left[i] = arr[start + i];
    for (int j = 0; j < sizeTwo; j++)
        right[j] = arr[mid + 1 + j];
    i = 0;
    j = 0;
    k = start;
    while (i < sizeOne && j < sizeTwo)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < sizeOne)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < sizeTwo)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void mergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}
int main()
{
    vector<int> arr{1, 5, 2, 3, 4};
    mergeSort(arr, 0, 4);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}