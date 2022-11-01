#include <iostream>
#include <regex>
using namespace std;
int main()
{
    string in;
    cout << "enter reg number";
    cin >> in;
    if(in.substring==)
    const regex pattren("[0-9]{2}[A-Z]{3}[0-9]{4}");
    if (regex_match(in, pattren) == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        int i1 = in.at(0)-'0';
        int i2 = in.at(1)-'0';
        cout << i2+(i1*10)+2004;
    }
    return 0;
}