#include <bits/stdc++.h>

using namespace std;

int find(vector<int> &parent, int u)
{
    if (parent[u] == u)
    {

        return u;
    }

    return parent[u] = find(parent, parent[u]);
}

bool dsu(vector<tuple<int, int, int>> &adj, int ans, int n)
{

    vector<int> parent(n);

    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
    }

    for (int i = 0; i < adj.size(); i++)
    {

        auto &tup = adj[i];
        int u = get<0>(tup);
        int v = get<1>(tup);
        int w = get<2>(tup);
        int p1 = find(parent, u);
        int p2 = find(parent, v);

        if (p1 != p2 && ((ans | w) == ans))
        {

            parent[p2] = p1;
        }
    }

    int comp = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == find(parent, i))
        {
            comp++;
        }
    }

    return comp == 1;
}

void solve()
{

    int n, m;
    cin >> n >> m;
    vector<tuple<int, int, int>> adj;
    for (int i = 0; i < m; i++)
    {

        int u, v, w;
        cin >> u >> v >> w;

        u--, v--;

        adj.push_back({u, v, w});
    }

    int ans = (1LL << 31LL) - 1LL;

    for (int i = 30; i >= 0; i--)
    {
        ans = ans ^ (1 << i);
        bool ok = dsu(adj, ans, n);

        if (ok == false)
        {
            ans = ans ^ (1 << i);
        }
    }

    cout << ans;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
