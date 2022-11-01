#include <stdio.h>
#include <stdlib.h>
// a b c _ g h i j _ k l
struct bt
{
    char data;
    struct bt *left;
    struct bt *right;
};
struct bt *newbt(char data)
{
    struct bt *tt = (struct bt *)malloc(sizeof(struct bt *));
    tt->data = data;
    tt->left = NULL;
    tt->right = NULL;
    return tt;
}
void inorder(struct bt *q)
{

    if (q != NULL)
    {
        inorder(q->left);
        printf(" %c ", q->data);
        inorder(q->right);
    }
}
void preorder(struct bt *q)
{

    if (q != NULL)
    {
        printf(" %c ", q->data);
        preorder(q->left);
        preorder(q->right);
    }
}

void postorder(struct bt *q)
{

    if (q != NULL)
    {
        postorder(q->left);
        postorder(q->right);
        printf(" %c ", q->data);
    }
}
int main()
{
    struct bt *t = newbt('a');
    t->left = newbt('b');
    t->right = newbt('c');
    // blank ll
    t->left->right = newbt('g');
    t->right->left = newbt('h');
    t->right->right = newbt('i');
    t->left->right->left = newbt('j');
    // blank
    t->right->left->left = newbt('k');
    t->right->left->right = newbt('l');
    printf("inorder:");
    inorder(t);
    printf("\npreorder:");
    preorder(t);
    printf("\npostorder:");
    postorder(t);

    return 0;
}