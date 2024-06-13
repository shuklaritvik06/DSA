#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int> &arr, int low, int high)
{
    for (int i = low; i < high; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                arr[j] = arr[j] ^ arr[j - 1];
                arr[j - 1] = arr[j] ^ arr[j - 1];
                arr[j] = arr[j] ^ arr[j - 1];
            }
        }
    }
}
void median(vector<int> &arr, int start, int end)
{
    int i = arr[start];
    int j = arr[end];
    int mid = arr[(start + end) / 2];
    if (i > j)
        swap(i, j);
    if (i > mid)
        swap(i, mid);
    if (mid > j)
        swap(mid, j);
    swap(mid, arr[end - 1]);
}
int partition(vector<int> &arr, int left, int right)
{
    median(arr, left, right);
    int pivot = arr[right - 1];
    int i = left - 1;
    int j = right - 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
        {
            swap(arr[i], arr[right - 1]);
            return i;
        }
        swap(arr[i], arr[j]);
    }
}
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        if (high - low + 1 < 10)
        {
            insertionSort(arr, low, high);
        }
        else
        {
            int pivot = partition(arr, low, high);
            quickSort(arr, low, pivot - 1);
            quickSort(arr, pivot + 1, high);
        }
    }
}
int main()
{
    vector<int> arr{24, 97, 40, 67, 88, 85, 15,
                    66, 53, 44, 26, 48, 16, 52,
                    45, 23, 90, 18, 49, 80, 23};
    quickSort(arr, 0, arr.size() - 1);
    for (auto i : arr)
        cout << i << " ";
    return 0;
}