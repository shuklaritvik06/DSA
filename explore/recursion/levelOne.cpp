#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
        return;
    cout << n;
    print(--n);
}
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1);
}
int sumOfDigits(int n, int sum)
{
    if (n == 0)
        return sum;
    if (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
        return sumOfDigits(n, sum);
    }
    return -1;
}
int reverseNum(int n, int temp)
{
    if (n == 0)
        return temp;
    if (n > 0)
    {
        int digit = n % 10;
        temp *= 10;
        temp += digit;
        n = n / 10;
        return reverseNum(n, temp);
    }
    return -1;
}
bool checkPalindrome(int n)
{
    if (reverseNum(n, 0) == n)
    {
        return true;
    }
    return false;
}
int countZeroes(int n, int temp)
{
    if (n == 0)
        return temp;
    if (n > 0)
    {
        int digit = n % 10;
        if (digit == 0)
            ++temp;
        n = n / 10;
        return countZeroes(n, temp);
    }
    return -1;
}
int main()
{
    int result;
    print(5);
    cout << endl
         << factorial(5) << endl;
    cout << sumOfDigits(1245, 0) << endl;
    cout << reverseNum(4281, 0) << endl;
    cout << checkPalindrome(1881) << endl;
    cout << countZeroes(30204, 0) << endl;
    return 0;
}