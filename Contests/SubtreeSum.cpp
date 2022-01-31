#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define N 2e5 + 7
int timer = 0;
vector<ll> linearTree(2 * N);
vector<int> startTime(N);
vector<int> endTime(N);

class FenwickTree
{

    vector<ll> BIT;
    void init(int n, vector<ll> &arr)
    {
        BIT.resize(2 * n, 0);
        for (int i = 0; i < 2 * n; i++)
        {
            add(i, arr[i]);
        }
    }

public:
    FenwickTree(int n, vector<ll> &arr)
    {

        init(n, arr);
    }
    void add(int idx, ll value)
    {

        while (idx < BIT.size())
        {
            BIT[idx] += value;
            idx = (idx | (idx + 1));
        }
    }

    ll sum(int idx)
    {

        ll totalSum = 0;
        while (idx >= 0)
        {
            totalSum += BIT[idx];
            idx = (idx & (idx + 1)) - 1;
        }

        return totalSum;
    }
};

void dfs(vector<ll> &val, vector<int> adj[], int node, int p)
{

    startTime[node] = timer;
    linearTree[timer++] = val[node];

    for (int c : adj[node])
    {

        if (c == p)
            continue;

        dfs(val, adj, c, node);
    }

    endTime[node] = timer;
    linearTree[timer++] = val[node];
}

int main(int argc, char const *argv[])
{

    ll n, q;
    cin >> n >> q;

    vector<ll> val(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> val[i];
    }
    vector<int> adj[n + 1];
    for (int i = 0; i < n - 1; i++)
    {

        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(val, adj, 1, 0);

    FenwickTree ft(n, linearTree);

    while (q--)
    {

        int t;
        cin >> t;
        if (t == 1)
        {
            ll node, value;
            cin >> node >> value;
            ll delta = value - val[node];
            val[node] = value;
            ft.add(startTime[node], delta);
            ft.add(endTime[node], delta);
        }
        else
        {

            ll node;
            cin >> node;
            ll sum = ft.sum(endTime[node]) - ft.sum(startTime[node] - 1);
            sum = sum / 2;
            cout << sum << "\n";
        }
    }

    return 0;
}