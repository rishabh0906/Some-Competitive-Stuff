#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<long long> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    unordered_map<long long, long long> mp;

    vector<long long> suff(n);
    suff[n - 1] = vec[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suff[i] = suff[i + 1] + vec[i];
    }
    long long ans = 0LL;
    long long sum = 0LL;
    for (int i = 0; i < n - 1; i++)
    {

        sum += vec[i];
        if (sum % 2 != 0)
        {
            mp[sum] = mp[sum] + 1;
            continue;
        }

        if (mp.find(sum / 2) != mp.end() && suff[i + 1] == sum/2)
        {
           
            ans += mp[sum / 2];
        }
        mp[sum] = mp[sum] + 1;
    }

    cout << ans << endl;

    return 0;
}
