#include <bits/stdc++.h>

using namespace std;

void dfs(vector<int> adj[], int node, vector<int> &dis, int p)
{
    dis[node] = dis[p] + 1;
    for (int v : adj[node])
    {

        if (v != p)
        {
            dfs(adj, v, dis, node);
        }
    }
}

void solve()
{

    int n;
    cin >> n;
    vector<int> adj[n + 1];

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> dis(n + 1);
    dis[0] = -1;
    dfs(adj, 1, dis, 0);

    sort(dis.begin(), dis.end());

    
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
