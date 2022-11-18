#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    bool win = false;
    // if ((a[n]<a[0])&&(a[0]<a[1]))
    // {
    //     cout<<1<<endl;
    //     win++;
    // }

    // for(i=1;i<n-1;i++)
    // {
    //     if((a[i-1]<a[i])&&(a[i]<a[i+1]))
    //     {
    //         win++;
    //         cout<<i+1<<endl;
    //     }
    // }
    // if((a[n-2]<a[n-1])&&(a[n-1]<a[0]))
    // {
    //     cout<<n;
    //     win++;
    // }
    for (i = 0; i < n; i++)
    {
        if ((a[(i - 1) % n] < a[i]) && (a[i] < a[(i + 1) % n]))
        {
            win = true;
            cout << i + 1 << endl;
        }
    }
    if (win == 0)
        cout << "None";
}