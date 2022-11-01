#include<iostream>
using namespace std;
class employee
{
    char empname[30];
    int emp_id;
    int salary;
    public:
        void getdata(void);
        void putdata(void);
        int search(int n);
};
void employee::getdata(void)
{
    cout<<"Enter the employee name:";
    cin>>empname;
    cout<<"Enter the employee ID:";
    cin>>emp_id;
    cout<<"Enter the salary:";
    cin>>salary;
}
void employee::putdata(void)
{
    cout<<"Employee name:"<<empname<<endl;
    cout<<"Employee id:"<<emp_id<<endl;
    cout<<"Employee salary:"<<salary<<endl;
}
int employee::search(int n)
{
    return emp_id;
}
int main()
{
    int n,a;
    cout<<"Enter number of employees:";
    cin>>n;
    employee e[n];
    for(int i=0;i<n;i++)
    {
        e[i].getdata();
    }
    for(int i=0;i<n;i++)
    {
      e[i].putdata();
    }
    int se;
    cout << "\n\nEnter the employee ID to be searched:";
    cin>>se;
    for(int i=0;i<n;i++)
    {
        if (se==e[i].search(se))
        {
            cout<<"\nPrinting the data for employee id:"<<se<<endl;
            e[i].putdata();
            break;
        }
    }
    return 0;
}