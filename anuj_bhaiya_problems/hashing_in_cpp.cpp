#include <bits/stdc++.h>
using namespace std;

int main(){
	// Hash maps are located in STL libarary.
	// It can be called as unordered_set.
	// All the elements are unique in this set not repeating.
	
	// Code to write a hash set in cpp.
	unordered_set<int> s;
	s.insert(5);
	s.insert(10);
	if(s.find(5)==s.end())
		cout<<"Not found"<<endl;
	else
		cout<<"Found"<<endl;
	for(auto it = s.begin(); it!=s.end(); it++)
		cout<<(*it)<<" ";
	s.clear();
	cout<<s.size()<<endl;
	return 0;
}
