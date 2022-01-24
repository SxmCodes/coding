#include <bits/stdc++.h>
using namespace std;

// If I have to tell that it's present or not or I have to return the index of that key. Let's go with just telling that it's present of not.

void print(int arr[], int n)
{
    cout << "Size of array is " << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool search(int arr[], int size, int key)
{
    print(arr, size);
    // key is the value which we have to find out.
    // Base Condition.
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        // We will compare each and everything inside the array.
        bool remaining_part = search(arr + 1, size - 1, key);
        return remaining_part;
    }
}

int main()
{

    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 6;
    bool ans = search(arr, size, key);

    if (ans)
    {
        cout << "Present " << endl;
    }
    else
    {
        cout << "Absent " << endl;
    }

    return 0;
}
