#include<iostream>
using namespace std;
class pass
{
    private:
        char name[30];
        int x,age,org;
        float dis;
        char adrs[30];
        char date[10];
    public:
        void getdata()
        {
            cout<<"Name:";
            cin>>name;
            cout<<"X:";
            cin>>x;
            cout<<"age:";
            cin>>age;
            cout<<"address:";
            cin>>adrs;
            cout<<"date:";
            cin>>date;
            cout<<"Orginal fare:";
            cin>>org;
        }
        void putdata()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"CA"<<x<<endl;
            cout<<"Age:"<<age<<endl;
            cout<<"date:"<<date<<endl;
            //cout<<"Total fare:"<<org-dis<<endl;
        }
        friend void discount(pass p1);
};
void discount(pass p1)
{
    if(p1.org<12)
    {
        p1.dis=p1.org*0.5;
        cout<<"Total fare:"<<p1.org-p1.dis<<endl;
    }
    else if(p1.org>=12 && p1.org<=58)
    {
        p1.dis=(p1.org*0.2);
        cout<<"Total fare:"<<p1.org-p1.dis<<endl;
    }
    else if(p1.org>59)
    {
        p1.dis=(p1.org*0.4);
        cout<<"Total fare:"<<p1.org-p1.dis<<endl;
    }
}
int main()
{
    pass p;
    p.getdata();
    p.putdata();
    discount(p);
    return 0;
}