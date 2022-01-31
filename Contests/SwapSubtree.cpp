#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define N 2e5 + 7
int timer = 0;
vector<ll> linearTree;
vector<int> startTime;
vector<int> endTime;

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

int query(FenwickTree ft, int node)
{

    return ft.sum(endTime[node]) - ft.sum(startTime[node] - 1);
}

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

    int t;
    cin >> t;
    while (t--)
    {

        ll n, q;
        cin >> n;


        timer = 0;
        startTime.resize(n + 1);
        endTime.resize(n + 1);
        linearTree.resize(2 * n);

        
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
        cin >> q;

        while (q--)
        {

            int u, v, x;
            cin >> u >> v >> x;
            int sum = 0;
            if ((startTime[u] < startTime[v] && endTime[v] < endTime[u]) || (startTime[v] < startTime[u] && endTime[u] < endTime[v]))
            {
                sum = query(ft, x) / 2;
            }
            else
            {
                if ((endTime[u] < startTime[x] || endTime[x] < startTime[u]) && ((endTime[v] < startTime[x] || endTime[x] < startTime[v])))
                {

                    sum = query(ft, x) / 2;
                }
                if (startTime[x] < startTime[v] && endTime[v] < endTime[x] && startTime[x] < startTime[u] && endTime[u] < endTime[x])
                {

                    sum = query(ft, x) / 2;
                }
                else if (startTime[x] < startTime[v] && endTime[v] < endTime[x])
                {

                    sum = query(ft, x) / 2 - query(ft, v) / 2 + query(ft, u) / 2;
                }
                else if (startTime[x] < startTime[u] && endTime[u] < endTime[x])
                {

                    sum = query(ft, x) / 2 - query(ft, u) / 2 + query(ft, v) / 2;
                }
                else
                {
                    sum = query(ft, x) / 2;
                }
            }

            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}