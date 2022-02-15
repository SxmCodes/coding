
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

void printLeaves(struct node *root)
{
    if (root == NULL)
        return;

    printLeaves(root->left);

    if (!(root->left) && !(root->right))
        cout << ("%d ", root->data);

    printLeaves(root->right);
}

void printBoundaryLeft(struct node *root)
{
    if (root == NULL)
        return;

    if (root->left)
    {
        cout << ("%d ", root->data);
        printBoundaryLeft(root->left);
    }
    else if (root->right)
    {
        cout << ("%d ", root->data);
        printBoundaryLeft(root->right);
    }
}
void printBoundaryRight(struct node *root)
{
    if (root == NULL)
        return;

    if (root->right)
    {
        printBoundaryRight(root->right);
        cout << ("%d ", root->data);
    }
    else if (root->left)
    {
        printBoundaryRight(root->left);
        cout << ("%d ", root->data);
    }
}
void printBoundary(struct node *root)
{
    if (root == NULL)
        return;

    cout << root->data;
    printBoundaryLeft(root->left);
    printLeaves(root->left);
    printLeaves(root->right);
    printBoundaryRight(root->right);
}
struct node *newNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = data;
    temp->left = temp->right = NULL;

    return temp;
}
int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->left->right->left = newNode(5);
    root->left->right->right = newNode(6);
    root->right = newNode(7);
    root->right->right = newNode(8);
    printBoundary(root);
    return 0;
}
