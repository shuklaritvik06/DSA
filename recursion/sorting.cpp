#include <iostream>
#include <vector>
using namespace std;
vector<int> sortArr(vector<int> &arr, int index, int iterations)
{
    if (iterations == arr.size())
        return arr;
    if (index < arr.size() - 1)
    {
        int newInd = index + 1;
        if (arr[index] > arr[newInd])
        {
            int temp = arr[newInd];
            arr[newInd] = arr[index];
            arr[index] = temp;
        }
        return sortArr(arr, ++index, iterations);
    }
    else
    {
        index = 0;
        return sortArr(arr, index, ++iterations);
    }
    return vector<int>{-1};
}
int getMin(vector<int> &arr, int index)
{
    int min = 0;
    for (int i = index + 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[min])
        {
            min = i;
        }
    }
    return min;
}
vector<int> selectionSort(vector<int> &arr, int index, int iteration)
{
    if (iteration == arr.size())
        return arr;
    if (index < arr.size())
    {
        int min_index = iteration;
        int min = getMin(arr, iteration);
        min_index = min;
        if (min_index != iteration)
        {
            int temp = arr[min_index];
            arr[min_index] = arr[iteration];
            arr[iteration] = temp;
        }
        return selectionSort(arr, ++index, iteration);
    }
    else
    {
        index = 0;
        return sortArr(arr, index, ++iteration);
    }
    return vector<int>{-1};
}
int main()
{
    vector<int> arr{
        1, 5, 9, 13, 12, 2, 1212};
    cout << "Sorted using Bubble Sort" << endl;
    for (auto i : sortArr(arr, 0, 0))
        cout << i << " ";
    cout << endl;
    cout << "Sorted using Selection Sort" << endl;
    for (auto i : selectionSort(arr, 0, 0))
        cout << i << " ";
    return 0;
}