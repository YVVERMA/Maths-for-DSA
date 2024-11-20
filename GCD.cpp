#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
// GCD -> Gratest Common Divisor
// a = 20 b = 28;

// Brute Force Approch
/*
int GCD(int a, int b)
{
    int gcd = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;

        }
    }
    return gcd;
}

int main()
{
    int a = 20;
    int b = 28;
    cout << GCD(a, b) << endl;
}

*/

// Euclid's Algorithm

int GCD(int a, int b)
{
    int gcd = 0;
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
        return b;
    if (b == 0)
        return a;
}

// LCM => Lowest Comman Multiple
int LCM(int a, int b)
{
    int gcd = GCD(a, b);
    return (a * b) / gcd;
}

int main()
{
    int a = 20;
    int b = 28;
    cout << GCD(a, b) << endl;
    cout << LCM(a,b) << endl;
}
