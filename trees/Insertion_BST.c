#include <stdio.h>
#include <malloc.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
typedef struct Node node;

node *makeTree(int data)
{
    node *p = (node *)malloc(sizeof(node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}

//function to insert a number
node *Insert(node *root, int digit)
{
    // node *ptr;
    if (root == NULL)
    {
        root = makeTree(digit);
    }
    else if (digit < root->data)
    {
        root->left = Insert(root->left, digit);
    }
    else if (digit > root->data)
    {
        root->right = Insert(root->right, digit);
    }
    else if (digit == root->data)
    {
        printf("duplicate data found , No insertion!\n");
        return;
    }
    return (root);
}

void inOrder(node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
int main()
{
    node *p1;
    node *p2;
    node *p3;
    node *p4;
    node *p5;
    node *p6;
    node *p7;
    p1 = makeTree(20);
    p2 = makeTree(18);
    p3 = makeTree(16);
    p4 = makeTree(19);
    p5 = makeTree(25);
    p6 = makeTree(23);
    p7 = makeTree(28);
    p1->left = p2;
    p1->right = p5;
    p2->left = p3;
    p2->right = p4;
    p5->left = p6;
    p5->right = p7;

    inOrder(p1);
    p1=Insert(p1,22);
    printf("\n");
    inOrder(p1);
    return 0;
}