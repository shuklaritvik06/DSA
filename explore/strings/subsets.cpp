#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Time=>O(n*2^n)
void subset(vector<int> &arr, vector<vector<int>> &result)
{
    result.push_back(vector<int>{});
    for (auto num : arr)
    {
        int n = result.size();
        for (int i = 0; i < n; i++)
        {
            vector<int> internal(result[i].begin(), result[i].end());
            internal.push_back(num);
            result.push_back(internal);
        }
    }
}

void printResult(vector<vector<int>> &result, string str)
{
    cout << str << endl;
    for (auto i : result)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
}
int main()
{
    vector<int> arr{1, 2, 3};
    vector<vector<int>> result;
    subset(arr, result);
    printResult(result, "Not Duplicate");
    return 0;
}