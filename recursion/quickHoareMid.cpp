#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int left, int right);
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quickSort(arr, low, p);
        quickSort(arr, p + 1, high);
    }
}
int partition(vector<int> &arr, int left, int right)
{

    int i = left - 1;
    int j = right + 1;
    int mid = (left + right) / 2;
    int pivot = arr[mid];
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
            return j;
        if (i < j)
            swap(arr[i], arr[j]);
    };
}
int main()
{
    vector<int> arr{10, 7, 8, 9, 5, 4, 3, 2, 6, 10, 20, 14, 15, 105, 135, 146};
    quickSort(arr, 0, arr.size() - 1);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}