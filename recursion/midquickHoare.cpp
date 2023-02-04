#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int start, int end)
{
    int i = start;
    int j = end;
    int mid = i + (j - i) / 2;
    int pivot = arr[mid];
    while (i < j)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[mid], arr[j]);
    return j;
}
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}
int main()
{
    vector<int> arr{10, 30, 15, 18, 20, 28, 48, 27, 10, 10, 23, 237};
    quickSort(arr, 0, arr.size() - 1);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}