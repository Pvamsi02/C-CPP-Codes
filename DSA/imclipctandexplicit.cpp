#include<iostream>
using namespace std;
class Test 
{
    public:
    Test();
    };
    Test::Test()
    {
        cout<<"constructor of class test called \n";
    }
    Test G;
    void f1() 
    {
    Test L;
    cout<<"here function f1()\n";
    }
int main() 
{
    Test X;
    cout<<"this is main function\n";
    f1();
    return 0;
}
