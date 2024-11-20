#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void Reverse(int n)
{
    int revs = 0;
    while (n != 0) 
    {
        int deg = n % 10;
        revs = (revs * 10) + deg;
        n /= 10;
    }
    cout << revs;
}

int main()
{
    int n = 12345;
    Reverse(n);
}