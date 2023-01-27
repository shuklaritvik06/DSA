#include <iostream>
#include <vector>
using namespace std;
vector<int> binarySearch(vector<vector<int>> &vect, int target)
{
    int row = 0;
    int size = vect.size();
    int c = size - 1;
    while (row < size && c >= 0)
    {
        if (vect[row][c] == target)
        {
            return vector<int>{row, c};
        }
        if (vect[row][c] < target)
        {
            row++;
        }
        if (vect[row][c] > target)
        {
            c--;
        }
    }

    return vector<int>{-1, -1};
}
int main()
{
    vector<vector<int>> vect{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    vector<int> result = binarySearch(vect, 4);
    cout << "Row: " << result[0] << " "
         << "Col: " << result[1] << endl;
    return 0;
}