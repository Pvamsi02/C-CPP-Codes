#include<iostream>
#include<string>
using namespace std;
template<class T>
void push(T a[])
{
    int i;
    for(i=9;i>=0;i--)
    {
        cout<<"book"<<i+1<<" - "<<a[i]<<"\n";
        
    }
}
int main(void)
{
    string a[10];
    int i;
    for(i=0;i<10;i++)
    {
        cout<<"\nbook "<<i+1<<" - ";
        getline(cin, a[i]);
        
    }
    cout<<"\n";
    push(a);
}