#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<int> g[N];
// this contains the visited nodes.
int vis[N];
// it will compute the level of nodes.
int level[N];

// actuall program.
void bfs(int source)
{
    // source is from where we have to begin the shit.
    queue<int> q;
    // pushing the source inside queue from where we will start.
    q.push(source);
    // we will mark the first element as visited.
    vis[source] = 1;

    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop();

        // sare connected children ko bhi queue mai danla hai.
        for (int child : g[cur_v])
        {
            // agar visited nahi hai tho nahi dalna hai, agar repeat hoga tho iss case mai jaiga.
            if (!vis[child])
            {
                // then push the element inside queue.
                q.push(child);
                // jab bhi kisi node ko visited array mai dalna hai tho usko visited mark kar dena hai.
                vis[child] = 1;
                // we will store the level of the node.
                level[child] = level[cur_v] + 1;
            }
        }
    }
}

int main()
{

    /*
                    IMPORTANT THINGS REGARDING BFS          
        BFS will tell the shortest path between the nodes. There would be many path which will tell you the to reach a certain node.

        This will tell you the shortest of all of the paths. This will tell the shortest path between from source vertex to destination vertex.
    */

    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    // we will start the whit from 1.
    bfs(1);
}