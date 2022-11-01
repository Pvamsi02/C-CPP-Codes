#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;
void insert();
void delete ();
void display();
void isfull();
void isempty();
void ispeak();
int main()
{
    int choice;
    while (choice != 7)
    {
        printf("\n1.insert(enqueue)\n2.Delete(dequeue)\n3.Display\n4.is empty check \n5.is full check\n6.is peak\n7.Exit\n");
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            isempty();
            break;
        case 5:
            isfull();
            break;
        case 6:
            ispeak();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("\nnot a valid input\n");
        }
    }
    return 0;
}
void insert()
{
    struct node *ptr;
    int item;

    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\noverflow\n");
        return;
    }
    else
    {
        printf("\nEnter value:");
        scanf("%d", &item);
        ptr->data = item;
        if (front == NULL)
        {
            front = ptr;
            rear = ptr;
            front->next = NULL;
            rear->next = NULL;
        }
        else
        {
            rear->next = ptr;
            rear = ptr;
            rear->next = NULL;
        }
    }
}
void delete ()
{
    struct node *ptr;
    if (front == NULL)
    {
        printf("\nunderflow\n");
        return;
    }
    else
    {
        printf("%d is deleted from front of queue.\n", front->data);
        ptr = front;
        front = front->next;
        free(ptr);
    }
}
void display()
{
    struct node *ptr;
    ptr = front;
    if (front == NULL)
    {
        printf("\nEmpty queue\n");
    }
    else
    {
        printf("\nprinting values\n");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}
void isempty()
{
    struct node *ptr;
    ptr = front;
    if (front == NULL)
    {
        printf("\nEmpty queue\n");
    }
    else
        printf("non empty queue\n");
}
void isfull()
{
    struct node *ptr;
    if (ptr == NULL)
    {
        printf("\nit is full\n");
        return;
    }
    else
        printf("it is not full\n");
}
void ispeak()
{
    struct node *ptr;
    printf("%d", front->data);
}