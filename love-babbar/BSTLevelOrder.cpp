#include <bits/stdc++.h>
using namespace std;

Node* levelOrder(Node* root, int data){
	if(root==NULL){
		return NULL;
	}
	if(data<=root->data){
		root->left = levelOrder(root->left, data);
	}
	root->right = levelOrder(root->right, data);
	return root;
}

Node* constructBST(int arr[], int n){
	// n is the size of array.
	if(n==0)
		return NULL;
	Node* root=NULL;
	for(int i=0;i<n;i++){
		root = levelOrder(root, arr[i]);
	}
	return root;
}

void inorderTraversal(Node* root)
{
    if (!root)
        return;
     
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);   
}

int main(){
 	int arr[] = {7, 4, 12, 3, 6, 8, 1, 5, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
     
    Node *root = constructBst(arr, n);
     
    cout << "Inorder Traversal: ";
    inorderTraversal(root);
	return;
}