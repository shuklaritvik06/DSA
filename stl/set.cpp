#include <iostream>
#include <set>
using namespace std;
//  The set stores the elements in sorted order and the values are immutable.
// Insertion of Elements – O(log N)
//  Deletion of Elements – O(log N)

int main()
{
    // By Default Ascending
    set<int> a;
    a.insert(10);
    a.insert(2);
    // Descending Order
    set<int, greater<int>> b;
    b.insert(10);
    b.insert(20);
    // Copy
    set<int> c(b.begin(), b.end());
    // Delete
    int num = b.erase(10);
    // Empty
    cout << b.empty();
    // Remove all
    b.clear();
    // Element Present
    b.count(10);
    // Emplace(better)
    b.emplace(10);
    cout << b.size();
    return 0;
}