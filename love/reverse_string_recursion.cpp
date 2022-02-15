#include <bits/stdc++.h>
using namespace std;

void reverse(string &arr, int i, int j)
{
		if(i>j){
			return;
		}
		swap(arr[i], arr[j]);
		i++;
		j--;
		// This is the end, that was crazy simple.
		reverse(arr, i,j);
}

int main()
{

  		string name = "abcde";
        cout << endl;
        reverse(name, 0 , name.length()-1 );
        cout << endl;
        cout << name << endl;

    return 0;
}