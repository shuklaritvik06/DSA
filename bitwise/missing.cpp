#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int i = 0;
        int res = 0;
        for (i = 0; i < nums.size(); i++)
        {
            res = res ^ nums[i] ^ i;
        }
        return res ^ i;
    }
};

int main()
{
    vector<int> arr{9, 6, 4, 2, 3, 5, 7, 0, 1};
    Solution a;
    cout << a.missingNumber(arr);
}