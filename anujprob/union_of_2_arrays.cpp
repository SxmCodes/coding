#include <bits/stdc++.h>
using namespace std;

int union_of_arrays(int a[], int b[])
{
    // Time Complexity = O(n+m);
    unordered_set<int> set;
    for (int x : a)
    {
        set.insert(x);
    }
    for (int x : b)
    {
        set.insert(x);
    }
    return set.size();
}

int main()
{
    int a[] = {10, 20, 30, 40, 4};
    int b[] = {4, 10, 30};
    union_of_arrays(a, b);
    return 0;
}