#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
    int jumps = 0, currfar = 0, currend = 0;
    for (int i = 0; i < n - 1; i++)
    {
        currfar = max(currfar, i + arr[i]);
        if (i == currend)
        {
            jumps++;
            currend = currfar;
        }
        if (currend >= n - 1)
        {
            break;
        }
    }
    if (currend < n - 1)
        return -1;
    return jumps;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    minJumps(arr, n);
    return 0;
}