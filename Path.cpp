#include <bits/stdc++.h>

using namespace std;

long long count(int n, int k)
{

    vector<long long> dp(n + 1, 0);
    int mod = (int)1e9 + 7;

    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= k; j++)
        {

            if (i - j >= 0)
            {
                dp[i] = (dp[i] + dp[i - j]) % mod;
            }
        }
    }

    return dp[n];
}

int main(int argc, char const *argv[])
{
    int n, k, d;
    cin >> n >> k >> d;
    int mod = (int)1e9 + 7;
    long long ans = (count(n, k) - count(n, d - 1) + mod) % mod;
    cout << ans << endl;
    return 0;
}
