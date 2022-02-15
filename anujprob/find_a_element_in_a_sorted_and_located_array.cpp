#include <bits/stdc++.h>
using namespace std;

// This is iterative function. This will not work this has few errors, I will figure it out soon. The idea is same, you can understand the idea and make a working code afterwards.
int bsearch(int a[], int key){
	int n = a.size();
	int low = 0, high = n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(a[mid] == key) return mid;
		if(a[low]<a[mid]){
			if(key>=a[low] && key < a[mid]){
				high = mid-1;
			}
			else{
				low = mid-1;
			}
		else{
			if(key>a[mid] && key<a[high]){
				low = mid-1;
			}
			else{
				high = mid-1;
			}
		}
		}
	}
}


int main(){	
		
	return 0;
}