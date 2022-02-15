#include <iostream>
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

int sumTree(Node* root){
    if(root==NULL)
        return 0;
    if(root->left == NULL && root->right==NULL)
        return root->data;
    
}

int main()
{
    //  Tree Creation.
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    return 0;
}
