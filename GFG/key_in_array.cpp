#include <iostream>
using namespace std;

bool findxink(int arr[], int x, int k, int x ){
    for(int i=0;i<n;i+k){
        for(int j =0;j<k;j++){
            if(arr[i+j]==x)
                break;
        if(j==k)
            return false;
        }
        if(i==n)
            return true;
        for(int j=i-k;j<n;j++){
            if(arr[j]==x)
                break;
        if(j==n)
            return false;
            
        return true;
        }
    }
}

int main(){
    return 0;
}
