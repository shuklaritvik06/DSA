#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    static vector<vector<int>> helper(vector<vector<int>> res, vector<int> &nums, int index, int nIndex, int size)
    {
        if (index == nums.size())
            return res;
        if (nIndex < size)
        {
            vector<int> internal(res[nIndex].begin(), res[nIndex].end());
            internal.push_back(nums[index]);
            res.push_back(internal);
            return helper(res, nums, index, ++nIndex, size);
        }
        else
        {
            nIndex = 0;
            size = res.size();
            return helper(res, nums, ++index, nIndex, size);
        }
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> res;
        res.push_back(vector<int>{});
        return helper(res, nums, 0, 0, res.size());
    }
};
int main()
{
    vector<int> arr{1, 2, 3};
    Solution a;
    for (auto i : a.subsets(arr))
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}