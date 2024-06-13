#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;
    int j = end + 1;
    swap(arr[end], arr[start]);
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] <= pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
        {
            swap(arr[start], arr[j]);
            return j;
        }
        swap(arr[i], arr[j]);
    }
}
void hoarePartition(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        hoarePartition(arr, low, p - 1);
        hoarePartition(arr, p + 1, high);
    }
}
int main()
{
    vector<int> arr{10, 7, 8, 9, 5, 4, 3, 2, 6, 10, 20, 14, 15, 105, 135, 146};
    int n = arr.size();
    hoarePartition(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
