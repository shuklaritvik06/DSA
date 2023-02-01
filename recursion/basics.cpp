#include <iostream>
using namespace std;
void print(int count)
{
    if (count > 4)
        return;
    cout << count + 1;
    print(++count);
}
int main()
{
    print(0);
    return 0;
}