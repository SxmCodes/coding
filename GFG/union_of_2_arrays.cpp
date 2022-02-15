#include <iostream>
using namespace std;

int doUnion(int arr[],int n, int brr[], int m){
    int i=0,j=0;
    while(i<m && j<n){
        if(arr[i]< brr[j])
            cout<<arr[i++]<< " ";
        else if(brr[j]<arr[i])
            cout<<brr[j++]<<" ";
        else{
            cout<<brr[j++]<<" ";
            i++;
        }
        while(i<m)
            cout<<arr[i++]<<" ";
        while(j<n)
            cout<<brr[j++]<<" ";
    }
}
int main(){
    return 0;
}
