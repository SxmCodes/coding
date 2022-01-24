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

// We have to return the height of the tree. We just have root node.
int height_tree(Node *root)
{
    //  Base condition.
    if (root == NULL)
    {
        return;
    }
    // Hypothesis.
    int left_height = height_tree(root->left);
    int right_height = height_tree(root->right);
    // Induction.
    return 1 + max(left_height, right_height);
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    height_tree(root);
    return 0;
}