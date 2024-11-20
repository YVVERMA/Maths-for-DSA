#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool isArmstrong(int n)
{
    int orignalN = n;
    int TotalSum = 0;

    while (n != 0)
    {
        int deg = n % 10;
        TotalSum += (deg * deg * deg);
        n /= 10;
    }
    return orignalN == TotalSum;
}

int main()
{
    int num = 15143;
    if (isArmstrong(num))
    {
        cout << "is Armstrong Num";
    }
    else
    {
        cout << "Not Armstrong Num";
    }
};