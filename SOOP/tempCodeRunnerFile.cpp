#include<iostream>
using namespace std;
class account
{
    int sales;
    int purchase;
    public:
    void read(void)
    {
        cout<<"Sales ammount:";
        cin>>sales;
        cout<<"Purchase ammount:";
        cin>>purchase;
    }
    friend void tax(account s);
};
void tax(account s)
{
    int p,t;
    p=s.sales-s.purchase;
    t=p*0.04;
    cout<<"Total tax to be paid:"<<t;
}
int main()
{
    account m;
    m.read();
    tax(m);
}