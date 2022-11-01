#include <bits/stdc++.h>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    // vector <T> ::iterator it = v.begin();
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
        /* code */
    }
    cout << endl;
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         cout << v[i] << " ";
    //         /* code */
    //     }
    //     cout << endl;
}
int main()
{
    vector<int> vec1;
    for (int i = 0; i < 20; i++)
    {
        vec1.push_back(i);
        /* code */
    }
    display(vec1);
    cout << "size:" << vec1.size() << endl;
    // cout << " End of vector 1;" << endl;
    vector<int> vec2;
    for (int i = 0; i < 10; i++)
    {
        int x;
        cin >> x;
        vec2.push_back(x);
        /* code */
    }
    display(vec2);
    cout << "size:" << vec2.size() << endl;
    sort(vec2.begin(), vec2.end());
    display(vec2);
    int a[10];
    for(int i=0;i<10;i++)
    {
        int t;
        cin>>t;
        a[i]=t;
    }
    sort(a,a+10);
    for(int i:a)
        cout<<a[i]<<" ";
    int b[10]={11,15,16,17,19,10,12,13,14,18};
    a.merge(b);
    for(int i:a)
        cout<<a[i]<<" ";
    return 0;
}