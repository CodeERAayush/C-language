#include <stdio.h>
#include <malloc.h>

//Structor for node

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
typedef struct Node node;

// function to make tree 

node *makeTree(int data)
{
    node *p = (node *)malloc(sizeof(node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}

int main()
{
    node *root;
    node *p1;
    node *p2;
    node *p3;
    root = (node *)malloc(sizeof(node));
    p1 = (node *)malloc(sizeof(node));
    p2 = (node *)malloc(sizeof(node));
    p3 = (node *)malloc(sizeof(node));
    root->data = 10;
    p1->data = 2;
    p2->data = 3;
    p3->data = 22;
    root->left = p1;
    p1->left = NULL;
    p1->right = NULL;
    root->right = p2;

    node *pp;
    pp = makeTree(222);
    p2->left = p3;
    p2->right = NULL;

    int b = p1->data;
    printf("%d", pp->data);
    return 0;
}