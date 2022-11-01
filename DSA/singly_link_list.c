#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void insert_begining();
void insert_last();
void random_insert();
void random_delete();
void display();
void search();
void max();
void sort();
void main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete node after specified location\n5.Search for an element\n6.Show\n7.Max element\n8.Sort\n9.Exit\n");
        printf("\nEnter your choice?");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            insert_begining();
            break;
        case 2:
            insert_last();
            break;
        case 3:
            random_insert();
            break;
        case 4:
            random_delete();
            break;
        case 5:
            search();
            break;
        case 6:
            display();
            break;
        case 7:
            max();
            break;
        case 8:
            sort();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("Wrong choice entered.try again");
        }
    }
}
void insert_begining()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\noverflow");
    }

    else if (head == NULL)
    {
        ptr->data = item;
        ptr->next = NULL;
        head = ptr;
        printf("\nNode inserted");
    }
    else
    {
        printf("\nEnter value:");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted");
    }
}
void insert_last()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\noverflow");
    }
    else
    {
        printf("\nEnter value:");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("\nNode inserted");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted");
        }
    }
}
void random_insert()
{
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\noverflow");
    }
    else
    {
        printf("\nEnter element value:");
        scanf("%d", &item);
        ptr->data = item;
        printf("\nEnter the location after which you want to insert:");
        scanf("%d", &loc);
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNode inserted");
    }
}
void random_delete()
{
    struct node *ptr, *ptr1;
    int loc, i;
    printf("\n Enter the location of the node :");
    scanf("%d", &loc);
    ptr = head;
    for (i = 0; i < loc; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if (ptr == NULL)
        {
            printf("\nCan't delete");
            return;
        }
    }
    ptr1->next = ptr->next;
    free(ptr);
    printf("\nDeleted node %d ", loc + 1);
}
void search()
{
    struct node *ptr;
    int item, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search:");
        scanf("%d", &item);
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("item found at location %d ", i + 1);
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            printf("Item not found\n");
        }
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nprinting values\n");
        while (ptr != NULL)
        {
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
    }
}
void max()
{
    struct node *ptr;
    ptr = head;
    int max = ptr->data;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        if (ptr->data > max)
            max = ptr->data;
    }
    printf("max=%d", max);
}
void sort()
{
    struct node *ptr, *temp;
    int x;
    ptr = head;
    while (ptr->next != NULL)
    {
        temp = ptr->next;
        while (temp->next != NULL)
        {
            if (ptr->data < temp->data)
            {
                x = temp->data;
                temp->data = ptr->data;
                ptr->data = x;
            }
            temp = temp->next;
        }
        if (ptr->next == NULL)
            break;
        else
            ptr = ptr->next;
    }
    display();
}