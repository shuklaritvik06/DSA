#include <iostream>
#include <algorithm>
using namespace std;
// O(nlogn)
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    if (p1.first > p2.first)
        return true;
    return false;
}
int main()
{
    int arr[] = {1, 5, 2, 4, 3};
    sort(begin(arr), end(arr));
    for (auto i : arr)
        cout << i;
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size);
    for (auto i : arr)
        cout << i;
    pair<string, int> pairs[] = {
        {"Ritvik", 200},
        {"Ramesh", 300}};
    string s = "123";
    // O(n * n !) -> Permutation
    cout << "Next" << endl;
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    cout << "Previous" << endl;
    do
    {
        cout << s << endl;
    } while (prev_permutation(begin(arr), end(arr)));

    int maximum = *max_element(arr, arr + size);
    int minimum = *min_element(arr, arr + size);
    cout << maximum << minimum;
    return 0;
}