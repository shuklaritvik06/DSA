#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
std::vector<double> sort(std::vector<double> &arr)
{
    int max = 0, min = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    int noOfBuckets = ceil(sqrt(max));
    int range = (max - min) / noOfBuckets;
    std::vector<std::vector<double>> bucketArray;
    for (int i = 0; i < noOfBuckets; i++)
        bucketArray.push_back(std::vector<double>());
    for (int i = 0; i < arr.size(); i++)
    {
        int index = (arr[i] - min) / range;
        bucketArray[index].push_back(arr[i]);
    }
    for (int i = 0; i < bucketArray.size(); i++)
    {
        if (!bucketArray[i].empty())
        {
            sort(bucketArray[i].begin(), bucketArray[i].end());
        }
    }
    int k = 0;
    for (std::vector<double> &lst : bucketArray)
    {
        if (!lst.empty())
        {
            for (double i : lst)
            {
                arr[k] = i;
                k++;
            }
        }
    }
    return arr;
}

int main()
{
    std::vector<double> arr{0.49, 0.41, 0.45, 0.46, 0.48, 5.9, 6.6};
    std::vector<double> sorted = sort(arr);
    for (double i : sorted)
        std::cout << i << " ";
    return 0;
}