#include <bits/stdc++.h>
using namespace std;
  
void insert(stack<int>&s, int ele){
    // This is not original function.
    // I am not specifing ele in the main function but ele is the element which has to be pushed into the stack.
    if(s.size()==0){
        s.push(ele);
        return;
    }
    int temp = s.top();
    s.pop();
    insert(s, ele);
    s.push(ele);
    return;
}
void reverse(stack<int>&s){
    // Only this needs to be executed in main function. This is the main function to reverse a stack.
    if(s.size()==1){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    insert(s, temp);
    return;
}

int main() {
    // Creating stack but not element. Element is the thing which needs to be pushed to the new stack created that have to be reversed.
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverse(s);
    return 0;
}