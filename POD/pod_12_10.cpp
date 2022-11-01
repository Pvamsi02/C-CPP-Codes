#include <iostream>
using namespace std;
int main()
{
    int flag = 0, n,i;
    cout << "enter the number:";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        if ((4 * i) + 6 == n)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << i <<"\n1";
    else
        cout << "0";
}