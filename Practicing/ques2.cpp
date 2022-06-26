#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
    int t, k;
    cin >> t >> k;
    vector<vector<int>> vec(t, vector<int>(2));
    int mx = 0;
    for (int i = 0; i < t; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            cin >> vec[i][j];
        }
        mx = max(mx, vec[i][1]);
    }
    int mod = (int)1e9 + 7;
    vector<long long> dp(mx + 1);

    for (int i = 0; i < k; i++)
    {
        dp[i] = 1LL;
    }

    for (int i = k; i <= mx; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - k]) % mod;
        if(dp[i]<0)
        {
            dp[i] += mod;
        }
    }

    for(int i=1;i<=mx;i++){
        dp[i]=(dp[i]+dp[i-1])%mod;
        if(dp[i]<0)
            dp[i]+=mod;
    }

    for(int i=0;i<t;i++){
        cout<<(dp[vec[i][1]]-dp[vec[i][0]-1]+mod)%mod<<endl;
    }
    return 0;
}
