#include <iostream>
#include <vector>
// O(nlog n) -> Best
// O(n2) -> Worst
std::vector<double> sort(std::vector<double> &arr)
{
    for (int interval = arr.size() / 2; interval > 0; interval /= 2)
    {
        for (int i = interval; i < arr.size(); i += 1)
        {
            double temp = arr[i];
            for (int j = i; j >= interval && arr[j - interval] > temp; j -= interval)
            {
                arr[j] = arr[j - interval];
            }
            arr[j] = temp;
        }
    }
    return arr;
}
int main()
{
    std::vector<double> arr{
        1.0, 0.6, 5.8, 2.9, 4, 3, 7, 10, 8};
    std::vector<double> sorted = sort(arr);
    for (int i = 0; i < sorted.size(); i++)
        std::cout << sorted[i] << " ";
    return 0;
}