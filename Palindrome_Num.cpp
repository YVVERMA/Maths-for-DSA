#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPanlindrome(int n)
{
    if (n <= 0)
        return false;   

    int orignal = n;
    int reverse = 0;
    while (n != 0)
    {
        int deg = n % 10;
        reverse = (reverse * 10) + deg;
        n /= 10;
    }
    return orignal == reverse;
}

int main()
{
    int num = 120211;
    if (isPanlindrome(num))
    {
        cout << "is Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}