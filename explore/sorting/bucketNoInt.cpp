#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<double> sortArray(vector<double> &arr, int length, int noOfBuckets)
{
    // This creates 6 Dynamic Length Buckets
    vector<double> b[noOfBuckets];
    for (int i = 0; i < length; i++)
    {
        /* code */
        int element = arr[i] * noOfBuckets;
        b[element].push_back(arr[i]);
    }
    for (int i = 0; i < noOfBuckets; i++)
    {
        sort(b[i].begin(), b[i].end());
    }

    int index = 0;
    for (int i = 0; i < noOfBuckets; i++)
        for (int j = 0; j < b[i].size(); j++)
            arr[index++] = b[i][j];
    return arr;
}
int main()
{
    // 0 -1
    vector<double> arr{0.97, 0.565, 0.656, 0.554, 0.1234, 0.665, 0.3434};
    int n = arr.size();
    vector<double> a = sortArray(arr, n, n);
    cout << "Sorted array is \n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}
