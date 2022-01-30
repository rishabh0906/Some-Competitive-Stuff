#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    vector<pair<int, int>> vec;
    for (auto it : mp)
    {
        vec.push_back({it.first, it.second});
    }

    vector<long long> dp(vec.size());

    for (int i = 0; i < vec.size(); i++)
    {

        int pr = i - 1;
        if (pr >= 0 && vec[pr].first + 1 == vec[i].first)
            pr--;
        if (pr == -1)
            dp[i] = 1LL * vec[i].first * vec[i].second;
        else
            dp[i] = dp[pr] + 1LL * vec[i].first * vec[i].second;
        if (i > 0)
            dp[i] = max(dp[i], dp[i - 1]);
    }

    cout << dp[vec.size() - 1] << endl;
    return 0;
}
