#include <bits/stdc++.h>
using namespace std;
/*
            POINTS TO REMEMBER.
1) If there are N nodes then there must be n-1 edges.
2) The downside of using matrix is the space complexity, the space complexity is O(n^2).
3) We cannot make such huge matrix of 10^6 or 7, the maximum we can go is just 10^3 or 4, there we use list.

         ADVANTAGES OF MATRIX
1) It will tell weather the nodes are connected or not and what is the weight of the node in O(1) time complexity.

// in matrix, O(1)
if(graph[i][j]==1){
    cout<<"Connected"<<end;
}
// if we want weight as well.
graph[i][j]; // this will tell you the weight.

// in list, O(N)
for(int child : graph[i]){
    if(child==j){
        // in comparison we have to write <pair<int, int>> instead of int child.

        cout<<"Connected"<<end;

        // when we found j then we need to see the second child which is wt.
        child.second();
    }
}
*/

// the value of n is 10^3.
const int N = 1e3 + 10;
int graph[N][N];

int main()
{
    // n is the number of vertex and m is number of edges.
    // 2nd case if there is weight given of edges then we will just declare wt and make v1 and v2 = wt.
    int n, m, wt;
    cin >> n >> m, wt;
    for (int i = 0; i < m; i++)
    {
        // it means that there is an edge between vertex 1 and vertex 2.
        int v1, v2;
        cin >> v1 >> v2;
        // we are making a connection between vertex 1 and vertex 2 and this is undirectional nodes, we have connection of 2 ways.
        graph[v1][v2] = wt;
        graph[v2][v1] = wt;
    }
}