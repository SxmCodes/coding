#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string arr, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (arr[i] != arr[j])
    {
        return false;
    }
    else
    {
        return checkPalindrome(arr, i + 1, j - 1);
    }
}

int main()
{

    string name = "BookkooB";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);

    if (isPalindrome)
    {
        cout << "Its a Palindrome " << endl;
    }
    else
    {
        cout << "Its not a Palindrome " << endl;
    }

    return 0;
}