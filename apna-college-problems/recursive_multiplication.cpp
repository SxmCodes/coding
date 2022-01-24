#include <bits/stdc++.h>
using namespace std;

int power(int n, int p)
{
    if (p == 0)
        return 1;
    int previous_power = power(n, p - 1);
    return n * previous_power;
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << power(n, p) << " \n ";
    return 0;
}