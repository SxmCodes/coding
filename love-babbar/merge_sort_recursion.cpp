#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{

    // Mid of the arrays.
    int mid = (s + e) / 2;

    // Length of the arrays.
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Creating the arrays.
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy the values inside the arrays which we made.
    int midVal = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[midVal++];
    }

    int midVal = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        first[i] = arr[midVal++];
    }

    // Merge 2 sorted arrays. This is the problem within the problem.
    int index1 = 0;
    int index2 = 0;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[midVal++] = first[index1++];
        }
        else
        {
            arr[midVal++] = first[index2++];
        }
    }
    // Comparing the values again.
    while (index1 < len1)
    {
        arr[midVal++] = first[index1++];
    }
    while (index1 < len2)
    {
        arr[midVal++] = second[index2++];
    }

    // Delete the arrays.
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{

    if (s >= e)
    {
        return;
    }

    //  Find mid.
    int mid = (s + e) / 2;

    // left part sorting.
    mergeSort(arr, s, mid);

    //  Right part sorting.
    mergeSort(arr, mid + 1, e);

    //  Merging.
    merge(arr, s, e);
}

int main()
{

    // Defination of array.
    int arr[8] = {11, 3, 563, 1, 35, 190, 4, 21};
    int n = 8;

    // S = 0 and E = n-1 as it's the last element.
    mergeSort(arr, 0, n - 1);

    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}