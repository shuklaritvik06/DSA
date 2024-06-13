#include <iostream>
#include <vector>
using namespace std;
int binarySearch(int start, int end, int target, vector<int> &arr)
{
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
        return mid;
    if (arr[mid] < target)
        return binarySearch(mid + 1, end, target, arr);
    if (arr[mid] > target)
        return binarySearch(start, mid - 1, target, arr);
    return -1;
}
int main()
{
    int a = 0;
    int b = 4;
    vector<int> arr{
        1, 2, 3, 4, 10};
    int target = 10;
    cout << binarySearch(a, b, target, arr);
    return 0;
}