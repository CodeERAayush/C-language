#include <stdio.h>
#include <malloc.h>

//structure for node

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
typedef struct Node node;

//function to make a tree

node *makeTree(int data)
{
    node *p;
    p = (node *)malloc(sizeof(node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
}

//Inorder traversal of tree

void inOrder(node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

//Function to find inorder pred of root node

node *inOrderPred(node *root)
{
        root = root->left;
    
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

// Function to delete node

node *delNode(node *root, int key)
{
node *inPre;
    if (root == NULL)
    {
        return NULL;
    }

    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    if (key < root->data)
    {
        root->left = delNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = delNode(root->right, key);
    }
    else
    {
        inPre = inOrderPred(root);
        root->data = inPre->data;
        root->left=delNode(root->left,inPre->data);
    }
    return root;
}

// Main function

int main()
{
    node *p = makeTree(25);
    p->left = makeTree(20);
    p->right = makeTree(30);
    p->left->left = makeTree(19);
    p->right->right = makeTree(32);
    p->left->right = makeTree(24);
    inOrder(p);
    p = delNode(p, 19);
    printf("\n");
    inOrder(p);
    return 0;
}