#include <iostream>
using namespace std;
int fibonacci(int number)
{
    if (number < 2)
        return number;
    return fibonacci(number - 1) + fibonacci(number - 2);
}
int main()
{
    cout << fibonacci(4);
    return 0;
}
