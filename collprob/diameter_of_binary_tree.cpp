#include <bits/stdc++.h>
using namespace std;

// Node Creation.
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
// int CalcHeight(Node* root){
//     if(root==NULL)
//         return 0;
//     return max(CalcHeight(root->left), CalcHeight(root->right) + 1);
// }

// int CalcDiameter(Node *root)
// {
//     if(root==NULL)
//         return 0;
//     int lheight = CalcDiameter(root->left),
//         rheight = CalcDiameter(root->right),
//         currentdiameter = lheight + rheight + 1;
//     int lDiameter = CalcDiameter(root->left), rDiameter = CalcDiameter(root->right);
//     return max(currentdiameter,max(lDiameter,rDiameter));
// }

                    //   USING POINTERS
int calDiameter(Node* root, int* height){
    if(root = NULL)
        return 0;
        *height = 0;   
    int lh = 0, rh = 0;
    int ldiameter = calDiameter(root->left, &lh);
    int rdiameter = calDiameter(root->right, &rh);

    int currDiameter = lh + rh + 1;
    *height = max(lh , rh) + 1;
    return max(currDiameter, max(ldiameter, rdiameter));
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

    // Diameter of a Binary Tree.
    int height = 0;
    cout << calDiameter(root, &height) << "\n ";
    return 0;
}