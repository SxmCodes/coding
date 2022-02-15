#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v{45,67,100,34,20,10};
    sort(v.begin(), v.end());
    cout << "Sorted \n";
    for (auto x : v)
    {
        cout << x <<" ";
    }
    return 0;
}