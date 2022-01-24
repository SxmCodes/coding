#include <bits/stdc++.h>
using namespace std;

/*
	1) We have to make the input smaller, this is most popular thing.
	2) Induction -> Base Condition -> Hypothesis.
	3) We can also make a recursion tree but it is not revelant to all problems.
		1) We have to make input/output method. This is when we understand the decision.
	4) In hypothesis we have to assign any task to recursion that you have to do this. In induction we have to write the code in order to make the task work.

	Hypothesis = We will make the input smaller for example we have to print 1 to n then we will call for n-1 and then we will put n at the end, N would be given by the user as input.

	Induction = It matters a lot, in this we will write the rest of the code after making the input smaller.

	Base Condition = It is just when we have to stop the fucking recursion problem. This is the smallest valid condition. Then our program will not work.

	This is the example :-

	// N would be the number where we have to print the statement.
	void print(int n){
		// Base Condition
		if(n==0){
			return;
		}
		print(n - 1);
		cout << n << endl;
	}

	int main(){
		int n = 10;
		print(n);

		return 0;
	}
*/

int main()
{

	return 0;
}