#include <bits/stdc++.h>
using namespace std;

bool isSame(string str1, string str2)
{
    int n = str2.size();
    int i = str1[0], j = str2[n - 1];
    if (str1.size() != str2.size())
        return false;

    if (str1[i] == str2[j])
    {
        i++;
        j--;
    }
    else
    {
        return false;
    }
}
int main()
{

    string str1 = "ABCD";
    string str2 = "DCBA";

    isSame(str1, str2);

    return 0;
}