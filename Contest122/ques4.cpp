#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <deque>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <stack>
#include <random>
#include <queue>

typedef long long ll;

using namespace std;

#define wt while(t--)
const ll maxn = 1e6;
vector<ll> weighs(1e3 + 3, 1e18);
void go()
{
    weighs[1] = 0;
    for (int i = 1; i <= 1000; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            if(i + i / j <= 1000)
                weighs[i + i / j] = min(weighs[i + i / j], weighs[i] + 1);
        }
    }

}
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> w(n + 1), c(n + 1);

    for (int i = 1; i <= n; i++)
    {
        ll b;
        cin >> b;
        w[i] = weighs[b];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
    }
    vector<vector<ll>> dp(2, vector<ll>(5e4 + 5, 0));
    for (int i = 1; i <= n; i++)
    {
        ll now = i % 2, before = (i - 1 + 2) % 2;
        for (int j = 0; j <= 5e4; j++)
        {
            if (j >= w[i])
            {
                dp[now][j] = max(dp[before][j], dp[before][j - w[i]] + c[i]);
            }
            else
            {
                dp[now][j] = dp[before][j];
            }
        }
    }
    ll mx = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j <= min((ll)(5e4), k); j++)
        {
            mx = max(mx, dp[i][j]);
        }
    }
    cout << mx << "\n";
}
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    go();
    while (t--)
    {
        solve();
    }
    return 0;
}