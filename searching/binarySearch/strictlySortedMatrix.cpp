#include <iostream>
#include <vector>
using namespace std;
vector<int> binarySearch(vector<vector<int>> &arr, int row, int cStart, int cEnd, int target)
{
    if (cStart > cEnd)
    {
        return vector<int>{-1, -1};
    }
    int cMid = (cStart + cEnd) / 2;
    if (arr[row][cMid] == target)
    {
        return vector<int>{row, cMid};
    }
    if (arr[row][cMid] < target)
    {
        binarySearch(arr, row, cMid + 1, cEnd, target);
    }
    binarySearch(arr, row, cStart, cMid - 1, target);
}
vector<int> search(vector<vector<int>> &arr, int target)
{
    int rows = arr.size();
    int cols = arr[0].size();
    if (rows == 1)
    {
        return binarySearch(arr, 0, 0, cols - 1, target);
    }
    int rStart = 0;
    int rEnd = rows - 1;
    int cMid = cols / 2;
    while (rStart < (rEnd - 1))
    {
        int rMid = rStart + (rEnd - rStart) / 2;
        if (arr[rMid][cMid] == target)
        {
            return vector<int>{rMid, cMid};
        }
        if (arr[rMid][cMid] < target)
        {
            rStart = rMid;
        }
        else
        {
            rEnd = rMid;
        }
    }
    if (arr[rStart][cMid] == target)
    {
        return vector<int>{rStart, cMid};
    }
    if (arr[rStart + 1][cMid] == target)
    {
        return vector<int>{rEnd, cMid};
    }

    if (target <= arr[rStart][cMid - 1])
    {
        return binarySearch(arr, rStart, 0, cMid - 1, target);
    }

    if (target >= arr[rStart][cMid + 1] && target <= arr[rStart][cols - 1])
    {
        return binarySearch(arr, rStart, cMid + 1, cols - 1, target);
    }

    if (target <= arr[rStart + 1][cMid - 1])
    {
        return binarySearch(arr, rStart + 1, 0, cMid - 1, target);
    }

    if (target >= arr[rStart + 1][cMid + 1] && target <= arr[rStart + 1][cols - 1])
    {
        return binarySearch(arr, rStart + 1, cMid + 1, cols - 1, target);
    }
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4, 5},
                               {6, 7, 8, 9, 10},
                               {11, 12, 13, 14, 15},
                               {16, 17, 18, 19, 20},
                               {21, 22, 23, 24, 25}};
    int target = 23;
    vector<int> res = search(arr, target);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}