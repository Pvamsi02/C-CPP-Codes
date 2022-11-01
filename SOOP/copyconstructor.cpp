#include<iostream>
using namespace std;
class code
{
    int id;
    public:
        code() {}
        code(int a)
        {
            id=a;
        }
        code(code &x)
        {
            id=x.id;
        }
        void display(void)
        {
            cout<<id;
        }
};
int main()
{
    code A(100);//A is created and initialized
    code B(A);// Copy Constructor called
    code C = A; // Copy constructor called again
    code D;//D is created not initialized
    D = A;
    cout<<"\n id of A:", A.display();
    cout<<"\n id of B:", B.display();
    cout<<"\n id of C:", C.display();
    cout<<"\n id of D:", D.display();
    return 0;
}