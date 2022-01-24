#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

/*
   Here we will find the key inside the BST and if we found it then we will return it.
*/

Node *search_BST(Node *root, int key)
{
    // Base Condition.
    if (root == NULL)
    {
        return;
    }
    if (root->data < key)
    {
        search_BST(root->right, key);
    }
    if (root->data > key)
    {
        search_BST(root->left, key);
    }
}
int main()
{

    return 0;
}