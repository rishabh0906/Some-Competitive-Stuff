#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> k(n);
        vector<ll> h(n);

        for (int i = 0; i < n; i++)
        {
            cin >> k[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        vector<pair<ll,ll>> pair(n);

        for (int i = 0; i < n; i++)
        {
            pair[i] = {k[i] - h[i], k[i]};
        }

        sort(pair.begin(), pair.end());

        ll l = -1, r = -1;
        ll ans = 0;
        for (auto it : pair)
        {

            if (it.first >= r)
            {
                ans += ((r - l) * (r - l + 1)) / 2;
                l = it.first;
                r = it.second;
            }
            else
            {

                r = max(r, it.second);
            }
        }

        ans += ((r - l) * (r - l + 1)) / 2;

        cout<<ans<<endl;
    }

    return 0;
}
