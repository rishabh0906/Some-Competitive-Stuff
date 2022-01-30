#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int n, l, k;
    cin >> n >> l >> k;
    vector<int> d(n);
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }

    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }
    a.push_back(0);
    d.push_back(l);

    vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, (long long)1e18));
    dp[0][0] = 0;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j <= k; j++)
        {
            for (int u = i - 1; u >= 0; u--)
            {
                int oldj = j - (i - u - 1);
                if (oldj >= 0)
                    dp[i][j] = min(dp[i][j], dp[u][oldj] + (d[i] - d[u]) * a[u]);
            }
        }
    }

    long long ans = (long long)1e18;

    for (int i = 0; i <= k; i++)
    {
        ans = min(ans, dp[n][i]);
    }
    cout << ans << endl;

    return 0;
}
