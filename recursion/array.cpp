#include <iostream>
using namespace std;
bool sortHelper(int arr[], int index)
{
    if (index == 4)
        return true;
    if (arr[index] <= arr[index + 1])
    {
        return sortHelper(arr, ++index);
    }
    return false;
}
bool isArraySorted(int arr[])
{
    int index = 0;
    return sortHelper(arr, index);
}
int searchHelper(int arr[], int index, int target)
{
    if (index <= 4 && arr[index] == target)
        return index;
    else
        return searchHelper(arr, ++index, target);
    return -1;
}
int linearSearch(int arr[], int target)
{
    int index = 0;
    return searchHelper(arr, index, target);
}
int rotatedBinarySearch()
{
}
int main()
{
    int a[] = {1, 2, 5, 6, 6, 8};
    cout << isArraySorted(a) << endl;
    cout << linearSearch(a, 6) << endl;
    return 0;
}