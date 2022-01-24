#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "aklsjfodsf";

    // To upper case.
    transform(str.begin(), str.end(), str.begin(), ::toupper);

    cout << str<<endl;

    // To lower case.
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout << str << endl;
    return 0;
}