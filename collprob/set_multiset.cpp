#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    //  THIS IS FORWARD PRITING.
    // Printing the element in the set.
    for(auto i:s){
        cout << i << " ";
    }
    cout << "\n";
    // You can do like this as well.
    for (auto i = s.begin(); i != s.end();i++){
        cout << *i << " ";
    }
    cout << "\n";
    // THIS IS FOR BACKWARD PRINTING.
    set<int>s1;
    s.insert(1);
    s.insert(2);
    s.insert(3);

    // Print in reverse.
    for (auto i = s1.rbegin(); i != s1.rend();i++){
        cout << *i << " ";
    }
    cout<< "\n";
    // Size of set.
    cout << s1.size();
    return 0;
}