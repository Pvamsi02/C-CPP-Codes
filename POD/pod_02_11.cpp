#include <iostream>
// 5
// 3 2 1 5 3
// 9 7 2 1 4
// 6 6 9 8 4
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] + b[i] + c[i];
    }
    int x = a[0];
    for (int i = 1; i < n; i++)
    {
        if (x < a[i])
            x = a[i];
    }
    if (x == a[0])
        cout << "YES";
    else
        cout << "NO";

    return 0;
}