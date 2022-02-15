#include <bits/stdc++.h>
using namespace std;

Node* solve(int start, int end){
	// it will store the inorder traversal of bst.
	vector<Node*> inOrder;

	// creating variables.
	int n = inOrder.length();
	int start = 0;
	int end = n;

	// base condition.
	if(start>end){
		return NULL;
	}
	// calc. mid for calculation.
	int mid = (start+end)/2;
	// the root would be the middle value of vector.
	Node* root = inOrder[mid];

	// calling functions to solve for rest of the part.
	root->left = solve(start, mid-1)
	root->right = solve(mid+1,end);
}

int main(){
	return 0;
}
