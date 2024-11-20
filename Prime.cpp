#include <iostream>
#include <vector>
using namespace std;

/*Print Prime Numeber

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void printPrimes(int n)
{
    int count = 0, num = 2;
    while (count < n)
    {
        if (isPrime(num))
        {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
}

int main()
{
    int n = 50;

    printPrimes(n);
    return 0;
}
*/

/* Prime Numbers
string isPrime(int n)
{
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return "Not Prime";
        }
    }
    return "Prime Number";
}
int main()
{
    int n = 47;
    cout << isPrime(n);
}
*/

/*Q
Given an integer n, return the number of prime numbers that are strictly less than n.
*/
/* Sieve of Eratosthenes count of Prime number in a range   leetcode = 204
1) Prime no assume


*/

int countPrimes(int n)
{
    vector<bool> isPrime(n + 1, true);
    int count = 0;
     for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            count++;

            for (int j = i * 2; j < n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    return count;
}

int main()
{
    int n = 50;
    cout << countPrimes(n) << endl;
}