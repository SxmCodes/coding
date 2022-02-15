#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool buddyStrings(string A, string B)
    {
        //Base Case
        if (A.size() != B.size()) // if length of both strings are different
            return false;

        if (A.size() == 0 || A.size() == 1) // if length of strings is ess than 2
            return false;

        // If both strings are same already then we search if any duplicate character present in string...
        if (A == B)
        {
            set<char> S(A.begin(), A.end());
            if (A.size() != S.size())
                return true;
            return false;
        }

        //if both strings are not same initially then we search if there are two indexes which can be swapped to make both string same

        int first = -1;
        int second = -1;
        int diff = 0; //to store number of indexes having different character in given strings
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] != B[i])
            {
                diff++;
                if (first == -1)
                    first = i;
                else if (second == -1)
                    second = i;

                if (diff > 2)
                    return false;
            }
        }

        if (diff == 2)
        {
            if (A[first] == B[second] && A[second] == B[first]) // possible to make both string same by swap
                return true;
        }
        return false;
    }
};

int main() 
{
    // We can call the function to check weather the function is working or not.

    return 0;
}