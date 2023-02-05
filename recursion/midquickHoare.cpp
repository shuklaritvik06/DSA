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

    int i = left;
    int j = right;
    int pivot = arr[(left + right) / 2];
    while (true)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i >= j)
            return j;
        if (i < j)
            swap(arr[i], arr[j]);
    };
    return -1;
}
int main()
{
    vector<int> arr{10, 50, 110, 15, 14, 78, 99, 87, 100};
    quickSort(arr, 0, arr.size() - 1);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}