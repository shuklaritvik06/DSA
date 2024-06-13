#include <iostream>
#include <vector>

// O(n + k) -> Best+Worst+Average
using namespace std;
int getMax(vector<int> &arr)
{
    int max = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
void countSort(vector<int> &arr, int pos)
{
    int n = arr.size();
    const int max = 10;
    vector<int> output(n);
    vector<int> count(max, 0);
    for (int i = 0; i < n; i++)
    {
        int index = (arr[i] / pos) % 10;
        count[index]++;
    }
    for (int i = 1; i < max; i++)
        count[i] += count[i - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / pos) % 10] - 1] = arr[i];
        count[(arr[i] / pos) % 10]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}
vector<int> radixSort(vector<int> &arr)
{
    int max = getMax(arr);
    for (int i = 1; max / i > 0; i *= 10)
    {
        countSort(arr, i);
    }
    return arr;
}
int main()
{
    vector<int> arr{121, 432, 564, 23, 1, 1, 45, 788};
    arr = radixSort(arr);
    return 0;
}