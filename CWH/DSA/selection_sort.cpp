#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n){
    int n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
}

void selectionSort(int *arr, int n){
    int indexofMin, temp;
    cout << "Running selection sort";
    for(int i=0; i < n-1; i++){
        indexofMin = i; 
        // This means the first element is the smallest in the array.
        for (int j = i+1; j < n; j++)
        {
            // I will compare the Ith element to all the other elements in the array, but the first element is the smallest element, this is what we had assumed.
            if(arr[j]<arr[indexofMin]){
                indexofMin = j;
                // I will search for a small element in array and if it comes, I will make it the first and smallest element in the array.
            }
        }
        // Code of Swap.
        temp = arr[i];
        arr[i] = arr[indexofMin];
        arr[indexofMin] = temp;
    }
}

int main()
{
    int arr[] = {40,2,100,19,120,3};
    int n = 6;
    cout << "Array before sorting :- " << endl;
    printArray(arr, n);
    selectionSort(arr, n);
    cout << "Array after sorting :- " << endl;
    printArray(arr, n);
    return 0;
}