#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
    sort(arr, arr + n);
     int nothing = arr[n - 1];
     return nothing;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << largest(arr, n);
    return 0;
}