#include <bits/stdc++.h>
using namespace std;

int main(){
    // Making of a set.
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(5);

    // Lower/Upper bound.
    cout << *s.lower_bound(2) << "\n";
    cout << *s.upper_bound(2) << "\n";
    cout << *s.lower_bound(3) << "\n";
    cout << *s.upper_bound(3) << "\n";
    cout << (s.upper_bound(5) == s.end()) << "\n";
    return 0;
}