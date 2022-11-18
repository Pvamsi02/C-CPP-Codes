#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x, y;
    cin >> x >> y;
    printf("%.2f", log(x) / log(y));
    int a;
    cin >> a;
    a & 1 ? cout << "odd" : cout << "even";
}