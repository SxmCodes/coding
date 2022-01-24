#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
	// pivot would be the first index initially, we would use it to find pivotIndex.
	int pivot = arr[s];

	// count variable would just add up to s to give up pivotIndex.
	int cnt = 0;

	// main step, just manuplate the value of count inorder to find pivotIndex.
	for (int i = s + 1; i <= e; i++)
	{
		if (arr[i] <= pivot)
		{
			cnt++;
		}
	}

	// this is where the pivot real index lies, after this everything is sorted.
	int pivotIndex = s + cnt;

	// swap if the condition doesn't fix the sanario.
	swap(arr[pivotIndex], arr[s]);

	// left and right wala part, comparing the values to pivotIndex.
	int i = s, j = e; // we have to deal with pointers.

	while (i < pivotIndex && j > pivotIndex)
	{
		// i and j would probably get nearer to the pivotIndex which is center, checking the possiblity that i is chota and j is badha than pivot which is good case.
		while (arr[i] < pivot)
		{
			i++;
		}
		while (arr[j] > pivot)
		{
			j--;
		}
		// if it's not the case then we have to swap the values.
		if (i < pivotIndex && j > pivotIndex)
		{
			swap(arr[i++], arr[j--]);
		}
	}
	return pivotIndex;
}
void quickSort(int arr[], int s, int e)
{
	if (s >= e)
		return;

	// partition.
	int p = partition(arr, s, e);

	// left part sorting.
	quickSort(arr, s, p - 1);

	// right part sorting.
	quickSort(arr, p + 1, e);
}

int main()
{

	// creation of array.
	int arr[6] = {3, 1, 4, 53, 19, 3};
	int n = 6;

	// calling the function.
	quickSort(arr, 0, n - 1);

	// printing the elements.
	for (int i = 0; i <= n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return;
}