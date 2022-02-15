#include <bits/stdc++.h>
using namespace std;

bool nQueen(int board[][], int row)
{
	// Base case.
	if (row == n)
	{
		return true;
	}
	// Recursion.
	for (int col = 0; col < n; col++)
	{
		// IsSafe is the function which will backtrack.
		if(isSafe(board, row, col){
			board[row][col] = 1;
			if (nQueen(board, roww + 1))
				return true;
			board[row][col] = 0;
		}
	}
	return false;
}

int main()
{
	int n,m;
	cin>>n>>m;
	int board[n][m];
	int row = 0;
	nQueen(board,row)
	return 0;
}
