#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	bool hasCycle(ListNode *head){
		while(head){
			int max = INT_MAX;
			if(head->value > max){
				return true;
			}
			else{
				head->data += INT_MAX;
				head = head->next;
			}
			return false;
		}
	}	
};
int main(){
	return 0;
}
