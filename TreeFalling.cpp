#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve()
{

    int n;
    cin >> n;
    pair<ll, ll> p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p, p + n);
    ll start = -2e9;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i].first - p[i].second > start)
        {
            start = p[i].first;
            ans++;
        }
        else if (p[i].first + p[i].second < p[i + 1].first)
        {
            ans++;
            start = p[i].first += p[i].second;
        }
        else
        {
            start = p[i].first;
        }
    }
    cout << ans << " ";
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
