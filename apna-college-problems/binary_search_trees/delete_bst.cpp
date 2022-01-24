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

Node *inorderSucc(Node* root)
{
	Node *curr = root;
	while(curr && curr->left!=NULL){
		curr = curr->left;
	}
	return curr;
}

Node *insertBST(Node *root, int val)
{
	if (root == NULL)
		return new Node(val);
	if (val < root->data)
		root->left = insertBST(root->left, val);
	else
		// Value > Root Data
		root->right = insertBST(root->right, val);
	return root;
}

Node *deleteBST(Node *root, int key)
{
	// Key is the node.
	// First we have to search in the tree for that node which we are deleting. This is more important.
	if (key < root->data)
	{
		// We have to search for the root to left when it is smaller.
		root->left = deleteBST(root->left, key);
	}
	else if (key < root->data)
	{
		// If value of key is bigger than right search.
		root->right = deleteBST(root->right, key);
	}
	else
	{
		if (root->left == NULL)
		{
			Node *temp = root->right;
			free(root);
			return temp;
		}
		if (root->right == NULL)
		{
			Node *temp = root->left;
			free(root);
			return temp;
		}
		// Case 3 - We have to find our inorder successor.
		Node *temp = inorderSucc(root->right);
		root->data = temp->data; // We will swap the value.
		root->right = deleteBST(root->right, temp->data);
	}
	return root;
}

void inorder(Node *root)
{
	if (root == NULL)
		return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
int main()
{
	Node *root = NULL;
	root = insertBST(root, 5);
	// Incertion of values in BST.
	insertBST(root, 1);
	insertBST(root, 3);
	insertBST(root, 4);
	insertBST(root, 2);
	insertBST(root,7);
	// Inorder function.
	inorder(root);
	cout << endl;

	root = deleteBST(root,5);
	inorder(root);
	cout << endl;
	return 0;
}
