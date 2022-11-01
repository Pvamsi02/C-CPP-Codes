#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j = 0;
    cin >> n;
    int a[100];
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            a[j] = i;
            j++;
        }
    }
    cout << j / 2 << endl;
    for (i = 0; i < j; i++)
    {
        for (int k = i; k < j; k++)
        {
            if (a[i] * a[k] == n)
            {

                cout << a[i] << " " << a[k] << endl;
            }
        }
    }
    return 0;
}