#include <bits/stdc++.h>
using namespace std;

// Two pointer approach.
bool findTriplet(int arr[], int n)
{
    int i, j, k, s;
    sort(arr, arr + n);
    for (int i = 0; i < n - 2; i++)
    {
        j = i + 1;
        k = n - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == 0)
            {
                return 1;
            }
            else if (s < 0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[] = {10, 20, 300, 0, 1, -1};
    int n = 6;
    findTriplet(arr, n);
    return 0;
}