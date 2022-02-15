#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &heights)
    {
        int start = 0, end = heights.size() - 1;
        int temp = 0;
        int length = end;
        while (start < end)
        {
            if (heights[start] <= heights[end])
            {
                temp = max(temp, heights[start] * length), start++;
            }
            else
            {
                temp = max(temp, heights[end] * length), end--;
            }
        }
        return temp;
    }
};

int main()
{
    return 0;
}