#include <bits/stdc++.h>
using namespace std;
 
int pal(string s, int l, int r){
    if (s.empty() || l < r){
        return;
    }
    while (l >=0 && r<s.length() && s[l]==s[r]){
        l--;
        r++;
    }
}

int main(){
    return 0;
}