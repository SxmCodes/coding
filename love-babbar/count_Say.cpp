#include <bits/stdc++.h>
using namespace std;

string countSay(int n)
{
    if (n == 1)
        return "1";
    if (n == 2)
        return "11";
    string s = "11";
    for (int i = 3; i < n; i++)
    {
        string t = ""; // This will contain next value answer.
        s += '&';
        int c = 1;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] != s[j - 1])
            {
                t += to_string(c); // C is our counter.
                t = t + s[j - 1];
                c = 1;
            }
            else
                c++;
        }
        s = t; // We will do so because to have the next answer.
    }
    return s;
}

int main()
{
    return 0;
}