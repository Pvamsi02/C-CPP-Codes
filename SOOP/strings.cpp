#include<iostream>
#include<cstring>
using namespace std;
/*int main()
{
    char str1[10]="Hello";
    char str2[10]="World";
    char str3[10];
    int len;
    strcpy(str3,str1);
    cout<<"strcpy(str3,str1):"<<str3<<endl;
    strcat(str1,str2);
    cout<<"strcpy(str3,str1):"<<str1<<endl;
    len=strlen(str1);
    cout<<"strlen(str1):"<<len<<endl;
    return 0;
    }*/
class person
{
    private:
        char name[30];
        int age;
    public:
        void getdata(void);
        void display(void)
        {
            cout<<"\n Name: "<<name;
            cout<<"\n Age: "<<age;
        }
};
void person :: getdata(void)
{
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter age: ";
    cin>>age;
}

int main()
{
    person p;
    p.getdata();
    p.display();
    return 0;
}