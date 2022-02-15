#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *right;
    node *left;
};

struct node * creatNode(int data){
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->right = NULL;
    n->left = NULL;
}

int main()
{
    /* WE CAN DO IT WITHOUT FUNCTION*/
    /*
    struct node *root;
    root = (struct node *)malloc(sizeof(struct node));
    root->data = 90;
    root->right = NULL;
    root->left = NULL;

    struct node *p2;
    p2 = (struct node *)malloc(sizeof(struct node));
    p2->data = 90;
    p2->right = NULL;
    p2->left = NULL;

    struct node *p3;
    p3 = (struct node *)malloc(sizeof(struct node));
    p3->data = 90;
    p3->right = NULL;
    p3->left = NULL;
    
    root->left = p1;
    root->right = p2;
*/
    /* DOING IT WITH FUNCTION.*/
    struct node *root = creatNode(3); // 3 is the data inside the node.
    struct node *p2 = creatNode(2); // 3 is the data inside the node.
    struct node *p3 = creatNode(1); // 3 is the data inside the node.

    root->left = p2;
    root->right = p3;
    
    return 0;
}