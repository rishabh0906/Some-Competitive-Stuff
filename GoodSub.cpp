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
        
        string str;
        cin >> str;

        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            vec[i] = (str[i] - '0');
        }

        unordered_map<int, int> mp;

        mp[0]++;
        int pref = 0;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {

            pref += vec[i];
            mp[pref - (i + 1)]++;
            ans += mp[pref - (i + 1)] - 1;
        }

        cout << ans << endl;
    }
    return 0;
}
