#include <bits/stdc++.h>
using namespace std;
 
string countSay(int n){
    string s("1");
    string res = "";
    while(n>1){
        int count = 0;
        char ch = s[0];
        for (int i = 0; i < s.length();i++){
            if(s[i]==ch)
                count++;
            else{
                res += to_string(count);
                res += ch;
                ch = s[i];
                count = 1;
            }
        }
        res += to_string(count);
        res += ch;
        res.clear();
        n--;
    }
}

int main(){
    return 0;
}