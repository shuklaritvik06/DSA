// Sieve of Eratosthenes

#include <iostream>
#include <vector>
using namespace std;
// Space-> O(n)

vector<bool> sieve(int n, vector<bool> &primes)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (!primes[i])
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                primes[j] = true;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (!primes[i])
        {
            cout << i << " ";
        }
    }
    return primes;
}
int main()
{
    int n = 40;
    vector<bool> primes(n + 1, false);
    sieve(n, primes);
    return 0;
}