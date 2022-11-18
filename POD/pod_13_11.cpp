#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    int i, c = 0, pos;
    cin >> s1;
    cin >> s2;
    for (int i = 0; i < s2.length(); i++)
    {
        pos = s1.find(s2[i]);
        if (pos != -1) // string::npos)
        {
            s1 = s1.substr(pos + 1);
            c++;
        }
    }
    if (c == s2.length())
        cout << "Yes";
    else
        cout << "No";
}