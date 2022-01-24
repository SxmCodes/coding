#include <bits/stdc++.h>
using namespace std;

// N denotes ROWS and K denotes COLUMNS.
int solve(int n, int k){
  if(n==1&&k==1){
    return 0;
  }
  int mid = pow(2, n - 1) / 2;

  if(k<=mid){
    return solve(n - 1, k);
  }
  else{
    // It's compilement, the values are completly different, used !.
    return !solve(n-1, k - mid);
  }
}

int main() { 
 
  return 0;
}