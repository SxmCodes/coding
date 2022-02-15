#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n;i++){
    cin >> a[i];
    }
    int starting=0, ending=n-1;
    while(starting<ending){
        swap(a[starting], a[ending]);
        starting++;
        ending--;
    }
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
        return 0;
}