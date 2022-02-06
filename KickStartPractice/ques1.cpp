#include <bits/stdc++.h>

using namespace std;

int solve()
{

    string s;
    cin >> s;
    string f;
    cin >> f;
    vector<bool> hash(26, false);

    for (int i = 0; i < f.size(); i++)
    {
        hash[f[i] - 'a'] = true;
    }
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int op1 = 0;
        while (hash[ch - 'a'] == false)
        {
            ch = (char)((ch - 'a' - 1 + 26) % 26 + 'a');
            op1++;
        }
        ch = s[i];
        int op2 = 0;
        while (hash[ch - 'a'] == false)
        {
            ch = (char)((ch - 'a' + 1) % 26 + 'a');
            op2++;
        }
   
        ans += min(op1, op2);
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int ans = solve();
        cout << "Case #" << i << ": " << ans << endl;
    }
    return 0;
}
