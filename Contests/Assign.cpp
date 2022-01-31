#include <bits/stdc++.h>

using namespace std;

void solve()
{

    int n;
    cin >> n;
    vector<long long> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    unordered_map<long long, long long> mp;

    for (int i = 0; i < n; i++)
    {

        mp[i + (vec[i] % n)]++;
        if (mp[i + (vec[i] % n)] > 1)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}