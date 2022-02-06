#include <bits/stdc++.h>

using namespace std;

int minStroke(string s, char c, unordered_map<char, string> &mp)
{
    int last_position = INT_MIN;
    int strokes = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == 'U')
            continue;

        if (s[i] == c || mp[s[i]].find(c) != string::npos)
        {
            if (last_position != i - 1)
                strokes++;

            last_position = i;
        }
    }

    return strokes;
}

int solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<char, string> mp;
    mp['G'] = "BY";
    mp['A'] = "RBY";
    mp['P'] = "BR";
    mp['O'] = "RY";

    return minStroke(s, 'R', mp) + minStroke(s, 'B', mp) + minStroke(s, 'Y', mp);
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
