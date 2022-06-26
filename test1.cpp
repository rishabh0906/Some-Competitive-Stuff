#include <bits/stdc++.h>

using namespace std;

void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> pref(n, -1);
    vector<int> suff(n, n);
   int mx=-1;
    for (int i = 0; i < n; i++)
    {

        if (s[i] == '1')
            pref[i] = i;
        else
        {
            pref[i]=max(pref,mx);
        }

    }
}

int main()
{

    solve();

    return 0;
}