#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j <= end; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1;
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
    vector<int> arr{1, 5, 4, 3, 2, 2};
    quickSort(arr, 0, arr.size() - 1);
    for (auto i : arr)
        cout << i << " ";
    return 0;
}