#include <stdio.h>
#include <string.h>
#define MaxElement 100
struct stackrecord
{
    int top;
    int x[MaxElement];
};
typedef struct stackrecord Stack;
int isempty(Stack s);
int isfull(Stack s);
Stack create();
Stack push(Stack s, int y);
Stack pop(Stack s);
int topelement(Stack s);
void Display(Stack s);
Stack create()
{
    Stack s;
    s.top = -1;
    return s;
}
int isempty(Stack s)
{
    return s.top == -1;
}
int isfull(Stack s)
{
    return s.top == MaxElement - 1;
}
Stack push(Stack s, int y)
{
    if (isfull(s))
    {
        printf("Stack is full");
    }
    else
    {
        ++s.top;
        s.x[s.top] = y;
    }
    return s;
}
int topelement(Stack s)
{
    if (!isempty(s))
    {
        return s.x[s.top];
    }
    else
    {
        printf("Stack is empty");
        return -1;
    }
}
Stack pop(Stack s)
{
    if (isempty(s))
    {
        printf("String is empty");
        s.x[s.top];
    }
    else
    {
        // printf("%d",s.x[s.top]);
        s.top--;
    }
    return s;
}
void Display(Stack s)
{
    for (int i = s.top; i >= 0; i--)
    {
        printf("%d\n", s.x[i]);
    }
}

int main()
{
    int i, k = 0;
    Stack s;
    s = create();
    char data[20];
    scanf("%s", &data);
    for (i = 0; data[i] != '\0'; i++)
    {
        if (0 <= ((int)data[i] - 48) && ((int)data[i] - 48) <= 9)
        {
            s = push(s, (int)(data[i] - '0'));
        }
        else
        {
            int x, y;
            x = topelement(s);
            s = pop(s);
            y = topelement(s);
            s = pop(s);
            if (data[i] == '+')
            {
                s = push(s, x + y);
            }
            else if (data[i] == '-')
            {
                s = push(s, y - x);
            }
            else if (data[i] == '*')
            {
                s = push(s, y * x);
            }
            else if (data[i] == '/')
            {
                s = push(s, y / x);
            }
        }
    }
    printf("%d", topelement(s));
}