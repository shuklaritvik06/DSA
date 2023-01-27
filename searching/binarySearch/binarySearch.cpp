#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        /* code */
        if (arr[mid] == target)
        {
            /* code */
            return mid;
        }
        else if (arr[mid] < target)
        {
            /* code */
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {
            /* code */
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {12, 235, 1231};
    int target = 235;
    cout << binarySearch(arr, target);
    return 0;
}