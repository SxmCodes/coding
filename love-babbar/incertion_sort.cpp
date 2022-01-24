#include <bits/stdc++.h>
using namespace std;
void traversal(int arr[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void incertion(int arr[], int n){
    int key, j;
    for(int i=0; i <= n-1; i++){
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[i]>j){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    return 0;
}