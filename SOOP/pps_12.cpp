#include<iostream>
using namespace std;
class employee
{
    private:
        int id;
        double  basic,da,hra,tot;
    public:
        void getdata(void);
        void salary(void);
        void display(void);
};
int main()
{
    employee e;
    e.getdata();
    e.salary();
    e.display();
    return 0;
}
void employee::getdata(void)
{
    cout<<"Enter the employee ID:";
    cin>>id;
    cout<<"Enter basic pay amount:";
    cin>>basic;
    cout<<"Enter DA percentage:";
    cin>>da;
    cout<<"Enter HRA amount:";
    cin>>hra;
}
void employee::salary(void)
{
    tot=basic+(da/100)*basic+hra;
}
void employee::display(void)
{
    cout<<"\nEmployee ID:"<<id;
    cout<<"\nTotal salary:"<<tot;
}