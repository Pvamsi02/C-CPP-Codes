#include<iostream>
using namespace std;
class test {
public:
test();
~test();
};
test::test() {
cout<<"constructor of test class called\n";
}
test::~test() {
cout<<"destructor of test class called\n";
}
int main() 
{
test x;
cout<<"Terminating main() \n";
return 0;
}