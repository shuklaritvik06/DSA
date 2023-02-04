#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int start, int end)
{
    int i = start;
    int j = end;
    int pivot = arr[start];
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    } while (i < j);
    swap(arr[start], arr[j]);
    return j;
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
    vector<int> arr{10, 30, 90, 40, 50, 70, 110, 14, 15, 78, 87, 99, 100};
    int n = arr.size();
    hoarePartition(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
