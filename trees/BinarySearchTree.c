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

void inOrder(node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d", root->data);
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
    p1 = makeTree(7);
    p2 = makeTree(5);
    p3 = makeTree(3);
    p4 = makeTree(8);
    p5 = makeTree(6);
    p1->left = p2;
    p2->left = p3;
    p1->right = p4;
    p4->left = p5;
    inOrder(p1);
    return 0;
}