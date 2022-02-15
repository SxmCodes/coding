#include <bits/stdc++.h>
using namespace std;

int sb(int arr[], int n, int x)
{
    int i = 0, j = -1, sum = 0, ans = 0;
    while (i < n)
    {
        sum += arr[i];
        if (sum > x)
        {
            int len = i - j;
            if (len == 1)
            {
                return 1;
            }
            if (len < ans || ans == 0)
            {
                ans = len;
            }
            while (j < i)
            {
                j++;
                sum -= arr[j];
                if (sum > x)
                {
                    int len = i - j;
                    if (len == 1)
                    {
                        return 1;
                    }
                    if (len < ans || ans == 0)
                    {
                        ans = len;
                    }
                }
                else
                    break;
            }
        }
        i++;
    }
    return ans;
}

int main()
{
    return 0;
}