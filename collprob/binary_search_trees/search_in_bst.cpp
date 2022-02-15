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

Node* searchinBST(Node* root, int key){
	if(root == NULL)
		return NULL;
	// Data = Key
	if(root->data == key)
		return root;
	// Data > Key
	if(root->data>key)
		return searchinBST(root->left,key);
	// Data < Key
	if(root->data<key)
		return searchinBST(root->right,key);
}	

void inorder(Node* root){
	if(root == NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}	
int main(){
	Node* root = NULL;
	root = insertBST(root, 5);
	// Incertion of values in BST.
	insertBST(root, 1);
	insertBST(root, 3);
	insertBST(root, 4);
	insertBST(root, 2);
	insertBST(root,7);

	// Inorder function.
	inorder(root);
	cout<<endl;

	// Calling second function.
	if(searchinBST(root,5)  == NULL)
		cout<<"The key doesn't exits";
	else
		cout<<"Key Exists";
	return 0;
}
