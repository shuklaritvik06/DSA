#include <iostream>
#include <vector>
using namespace std;
vector<double> sort(vector<double> &arr)
{
    bool sorted = false;
    while (!sorted)
    {
        sorted = true;
        for (int i = 1; i <= arr.size() - 2; i += 2)
        {
            if (arr[i] > arr[i + 1])
            {

                double temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
                sorted = false;
            }
        }
        for (int i = 0; i <= arr.size() - 2; i += 2)
        {
            if (arr[i] > arr[i + 1])
            {
                double temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
                sorted = false;
            }
        }
    }
    return arr;
}
int main()
{
    vector<double> arr{1.8, 6.6, 5.6, 7.2, 8.4, 9.3, 7, 9, 8};
    vector<double> sorted = sort(arr);
    for (auto i : sorted)
    {
        cout << i << " ";
    }
    return 0;
}