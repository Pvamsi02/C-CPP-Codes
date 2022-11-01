#include <iostream>
using namespace std;
class BP
{
    char name[30];
    int x;
    int age;
    int fare;
    public:
    void getdata()
    {
        cout<<"name - ";
        cin>>name;
        cout<<"\nx - ";
        cin>>x;
        cout<<"\nage - ";
        cin>>age;
        cout<<"\nfare - ";
        cin>>fare;
    }
    friend void fare(BP x);
};
void fare(BP x)
{
    cout<<x.name<<"\n";
    cout<<"CA"<<x.x<<"\n";
    cout<<x.age<<"\n";
    if (x.age>=18 and x.age<=58)
    {
        int f;
        f=0.2*x.fare;
        cout<<x.fare-f;
    }
    if (x.age<18)
    {
        int f;
        f=0.5*x.fare;
        cout<<x.fare-f;
    }
    if (x.age>58)
    {
        int f;
        f=0.4*x.fare;
        cout<<x.fare-f;
    }
}
int main(void)
{
    BP a;
    a.getdata();
    fare(a);
}