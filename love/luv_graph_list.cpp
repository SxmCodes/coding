#include <bits/stdc++.h>
using namespace std;
/*
1) The number of edges must not cross 10^7.
2) In case of weight of edges we can have a pair of int, int.
*/
const int N = 1e3 + 10;
vector<int> graph[N];
// This is another case when we are given with weight as well.
// vector<pair<int, int>> graph2[N];

int main()
{
    // n->vertex and m->edge.
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        // vertex.
        int v1, v2;
        cin >> v1 >> v2;
        // connections between the nodes. o(n+m) -> space complexity.
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);

        // This is for another case.
        // graph[v1].push_back({v2, wt});
        // graph[v2].push_back({v1, wt});
    }
}