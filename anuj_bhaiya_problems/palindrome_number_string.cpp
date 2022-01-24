#include <bits/stdc++.h>
using namespace std;
 
bool isPali(string s, int l, int r){
    if(l>r)
        return true;
    if(s[l]!=s[r])
        return false;
    return isPali(s, l + 1, r - 1);
}

int main(){
    string s = "aba";
    int n = s.size();
    int l = 0, r = n - 1;
    isPali(s, l, r);
    return 0;
}