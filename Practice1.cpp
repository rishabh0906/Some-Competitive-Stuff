#include <bits/stdc++.h>

using namespace std;

bool dfs(vector<int> adj[], int src, int des, vector<bool> &vis)
{

    if (src == des)
        return true;
    vis[src] = true;
    bool res = false;

    for (int v : adj[src])
    {
        if (!vis[v])
            res = res || dfs(adj, v, des, vis);
    }

    return res;
}

void solve()
{

    int n;
    cin >> n;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x] = i;
    }

    vector<int> adj[n];
    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {

        int u, v;
        cin >> u >> v;

        adj[mp[u]].push_back(mp[v]);
    }

    int src, des;
    cin >> src;
    cin >> des;
    src = mp[src];
    des = mp[des];
    vector<bool> vis(n);

    bool ans = dfs(adj, src, des, vis);
    cout << ans << endl;
}

int main()
{

    solve();

    return 0;
}