#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
//  TC => O(log 10 n)
void PrintDigits(int n)
{
    while (n != 0)
    {
        int deg = n % 10;
        cout << deg << " ";
        n /= 10;
    }
    cout << endl;
}

void CountDig(int n)
{
    int count = 0;
    while (n != 0)
    {
        int deg = n % 10;
        count++;
        n /= 10;
    }
    cout << count;
    cout << endl;
}

void SumDig(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int deg = n % 10;
        sum += deg;
        n /= 10;
    }
    cout << sum;
    cout << endl;
}

int main()
{
    int num = 12345;
    PrintDigits(num);
    CountDig(num);
    // cout << (int)(log10(num)+1); count of number
    SumDig(num);
};