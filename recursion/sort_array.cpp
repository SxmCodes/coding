#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &vec, int temp)
{
    // Ja tho 0 ho ja tho last element se badha ho.
    if (vec.size() || vec[vec.size() - 1] <= temp)
    {
        // Pushing it in the last as it is the largest among all the values.
        vec.push_back(temp);
        return;
    }
    // Make input smaller.
    int val = vec[vec.size() - 1];
    // Poping out the last element.
    vec.pop_back();
    // Inserting the last element.
    insert(vec, temp);
    // Pushing that again in the actual array.
    vec.push_back(val);
    // Finally returning the whole statement.
    return;
}

void sort(vector<int> &vec){
    // Base condition.
    if(vec.size()==1){
        return;
    }
    // Storing the last character in temp.
    int temp = vec[vec.size() - 1];
    // Removing the last element.
    vec.pop_back();
    // Sort function.
    sort(vec);
    // Insert the last element which is not in vector (temp).
    insert(vec, temp);
}

int main()
{
    vector<int> vec;
    sort(vec);
    return 0;
}