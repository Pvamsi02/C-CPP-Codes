#include<stdio.h>
int fun(int ptr[])
{
    int x = 10;
    // size of a pointer is printed
    printf("sizeof(ptr) = %d\n", sizeof(ptr));
    // This allowed because ptr is a pointer, not array
    ptr = &x;
    printf("*ptr = %d ", *ptr);
    return 0;
}
int main()
{
 int arr[] = {10, 20, 30, 40, 50, 60};
 printf("sizeof(arr) = %d\n", sizeof(arr)/4);
 fun(arr);
 return 0;
}
