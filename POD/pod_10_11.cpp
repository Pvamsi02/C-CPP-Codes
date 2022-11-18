#include <iostream>
#include <list>
#include <stack>
using namespace std;
int main()
{
    char a[20];
    char t;
    int i = 0;
    cin >> a;
    list<char> v;
    stack<char> s;
    while (a[i] != '\0')
    {
        v.push_back(a[i]);
        i++;
    }
    // auto j = v.begin();
    // for (int i = 0; i < v.size(); i--)
    for (auto i = v.begin(); i != v.end(); ++i)
    {
        // j++;
        // cout << *i << endl;
        if (*i >= '0' && *i <= '9')
        {
            t = *i;
            v.remove(t);
            v.push_back(t);
        }
        else if (*i == '(' || *i == ')')
        {
            s.push(*i);
        }
    }
    while (s.top() != -1)
    {
        t = s.top();
        s.pop();
        cout << t;
        // v.push_back(t);
    }
    // for (auto i = v.begin(); i != v.end(); ++i)
    //     cout << *i;
}