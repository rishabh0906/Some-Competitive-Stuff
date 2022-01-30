#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> vec1(n);
        vector<long long> vec2(n);

        long long mn = 1;
        long long mx = 1;
        int mod = (int)1e9 + 7;
        for (int i = 0; i < n; i++)
        {
            cin >> vec1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> vec2[i];
        }

        for (int i = 0; i < n; i++)
        {
            mn = (mn * (vec1[i] + vec2[i] + 1) % mod) % mod;
            mx = (mx * ((vec1[i] + 1) * (vec2[i] + 1)) % mod + mod) % mod;
        }

        cout << mn % mod << " " << mx % mod << endl;
    }

    return 0;
}
