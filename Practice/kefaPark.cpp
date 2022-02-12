#include <bits/stdc++.h>

using namespace std;
int dfs(vector<int> adj[], int p, int u, vector<int> &cat, int m, int cats = 0)
{

    if (cat[u] == 1)
        cats += 1;
    else
        cats = 0;

    if (cats > m)
        return 0;

    if (u != 0 && adj[u].size() == 1 && cats <= m)
        return 1;

        int count = 0;
    for (int v : adj[u])
    {

        if (v != p)
        {
            count += dfs(adj, u, v, cat, m, cats);
        }
    }

    return count;
}
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    vector<int> adj[n];

    for (int i = 0; i < n - 1; i++)
    {

        int u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << dfs(adj, -1, 0, vec, m) << endl;
}

int main()
{

    solve();

    return 0;
}