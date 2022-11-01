#include <stdio.h>
int main()
{

    int v[3] = {10, 100, 200};

    int *ptr;

    ptr = v;

    for (int i = 0; i < 3; i++)

    {

        printf("Value of *ptr = %d\n", *ptr);

        printf("Value of ptr = %p\n", ptr);

        printf("Value of V = %p\n",&v[i]);

        printf("Value of V = %p\n",v[i]);

        printf("Value of V = %d\n\n",v[i]);

        ptr++;

    }

}