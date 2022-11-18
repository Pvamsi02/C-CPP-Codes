#include <iostream>
using namespace std;
int fact(int n, int x)
{
    int res = 1, i;
    for (i = 1; i <= x; i++)
    {
        res *= i;
        if (res == x)
            return i;
    }
    return -1;
}
int sf(int n)
{
    int i, res;
    if (n % 2 == 0)
    {
        for (i = 2; i < n; i = i + 2)
            res *= i;
    }
    else
    {
        for (i = 1; i < n; i = i + 2)
            res *= i;
    }
    return res;
}
int main()
{
    int n, x, k;
    cin >> x;
    k = fact(1, x);
    if (k == -1)
        cout << k;
    else
        cout << sf(k);
}