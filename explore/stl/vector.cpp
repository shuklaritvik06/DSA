#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vect;
    for (int i = 0; i < 5; i++)
    {
        vect.push_back(i);
    }
    cout << vect.size();
    cout << vect.empty();
    cout << vect.capacity();
    cout << vect.max_size();
    vect.resize(4);
    cout << vect.front();
    cout << vect.back();
    int *pos = vect.data();
    cout << *pos;
    cout << vect.at(1);
    vect.emplace_back(23);
    // Vector Basic Methods
    vect.assign(5, 19);
    vect.insert(vect.begin(), 5);
    vector<pair<string, int>> vecto;
    vecto.push_back(pair<string, int>("Ramesh", 23));
    vector<int> a(5, 20);
    for (auto it = vect.begin(); it != vect.end(); it++)
        cout << *(it) << " ";
    vect.erase(vect.begin() + 1);
    vect.insert(vect.begin(), 2, 140);
    vect.clear();
    return 0;
}