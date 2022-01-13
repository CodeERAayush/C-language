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
//Inorder traversal
void inOrder(node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d", root->data);
        inOrder(root->right);
    }
}
//PreOrder traversal
void PreOrder(node *root)
{
    if (root != NULL)
    {
        printf("%d", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
//PostOrder traversal
void PostOrder(node *root)
{
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d", root->data);
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
    p2 = makeTree(2);
    p3 = makeTree(1);
    p4 = makeTree(0);
    p5 = makeTree(4);
    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p2->right = p5;
    printf("InOrder traversal\n");
    inOrder(p1);
    printf("\nPreOrder traversal\n");
    PreOrder(p1);
    printf("\nPostOrder traversal\n");
    PostOrder(p1);
    return 0;
}