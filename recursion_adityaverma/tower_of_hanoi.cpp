#include <bits/stdc++.h>
using namespace std;

void solve(int s, int d, int h, int n){
  // Base Condition.
  if(n==1){
    cout << "Moving plate N from S to D.";
    return;
  }
  // Moving from starting to helper.
  solve(s, h, d, n - 1);
  cout << "Moving N from S to D." << endl;
  // Moving from helper to destination.
  solve(h, d, s, n - 1);
  return;
}

int main(){
  // Creating the plates from user.
  int n;
  cin>>n;

  // Making of poles. 
  int s=1, d=2, h=3;
  solve(n, s, d, h);

  return;
}
