#include <iostream>
#include <vector>
using namespace std;
vector<double> sort(vector<double> &arr)
{
    int max = 0, min = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    int range = max - min + 1;
    vector<double> holes[range];
    for (int i = 0; i < arr.size(); i++)
    {
        int index = arr[i] - min;
        holes[index].push_back(arr[i]);
    }
    int index = 0;
    for (int i = 0; i < range; i++)
    {
        vector<double>::iterator it = holes[i].begin();
        for (it; it != holes[i].end(); ++it)
            arr[index++] = *it;
    }
    return arr;
}
int main()
{
    vector<double> arr = {1.0, 0.6, 5.8, 2.9, 4, 3, 7, 10, 8};
    vector<double> sorted = sort(arr);
    for (int i = 0; i < sorted.size(); i++)
        cout << sorted[i] << " ";
    return 0;
}