#include <bits/stdc++.h>
using namespace std;

void solve(string input, string output)
{
	// Base Condition. If input is NULL, then return.
	if (input.size() == 0)
	{
		cout << output << endl;
		return;
	}

	// Making that 2 outputs.
	string output1 = output;
	string output2 = output;

	// First we will not take it then we will take it in second step.
	output2.push_back(input[0]);

	// We have to erase the rest of ouput.
	input.erase(input.begin() + 0); // This function takes an iterator.

	solve(input, output1);
	solve(input, output2);

	return;
}

int main()
{

	// We have to take input from user but output must be nothing, we have to decide it afterwards.
	string input;
	cin >> input;

	string output = " ";

	// Calling the function.
	solve(input, output);
	return 0;
}
