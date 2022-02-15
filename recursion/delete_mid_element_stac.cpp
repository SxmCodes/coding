#include <bits/stdc++.h>
using namespace std;

//  Deleting the middle element in stack.
void solve(stack<int> std, int k)
{
    // Base Condition.
    if (k == 1)
    {
        std.pop();
        return;
    }
    // Hypothesis
    // We will just store the last element in temp and then pop it out of stack.
    int temp = std.top();
    std.pop();
    // Same shit will happen with rest of the elements till the middle element.
    solve(std, k - 1);

    // Induction.
    // We will just push the element back which is stored inside temp.
    std.push(temp);
    return;
}

stack<int> mid_del(stack<int> std, int size)
{
    if (std.size() == 0)
    {
        return std;
    }
    int k = (size / 2) + 1;
    solve(std, k);
    return std;
}

int main()
{
    stack<int> std;
    std.push(1);
    std.push(2);
    std.push(3);
    std.push(4);

    // I don't really know this step.
    int k = std.size();
    mid_del(std, k);
    return 0;
}