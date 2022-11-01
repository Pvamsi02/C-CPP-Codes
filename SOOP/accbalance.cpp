#include<iostream>
using namespace std;
class AccClass 
{
    int accno;
    float balance;
    public:
        AccClass() {
        cin>>accno>>balance; }
        AccClass( int accin) {
        accno=accin; balance=0.0; }
        AccClass(int accin,float bal) {
        accno=accin; balance=bal; }
        void display() 
        {
            cout<<"\n"<<accno<<"\n"<<balance<<"\n\n";
        }
        void MoneyTransfer(AccClass & acc, float amount) 
        {
            balance=balance-amount;
            acc.balance +=amount;
        }
};
int main() 
{
    cout<<"hloo\n";
    AccClass acc1;
    AccClass acc2(10);
    AccClass acc3(20,750);
    acc1.display();
    acc2.display(); 
    acc3.display();
    float credit;
    cout<<"\nenter the amount to be transferred from acc3 to acc1\n"; 
    cin>>credit;
    acc3.MoneyTransfer(acc1,credit);
    acc1.display();
    acc2.display(); 
    acc3.display();
    return 0;
}
