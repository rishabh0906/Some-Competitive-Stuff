#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN (ll)2e9 + 7



void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<tuple<ll, ll, ll>> mines;

    for (int i = 0; i < n; i++)
    {
        ll x, y, t;
        cin >> x >> y >> t;
        mines.push_back({x, y, t});
    }

}

int main(int argc, char const *argv[])
{

    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
    return 0;
}
