#include <bits/stdc++.h>

using namespace std;

int rightMost_Index(vector<int> &b)
{

    int x = 1;

    while (x + 1 <= b.size() && b[x + 1] == b[1])
        x++;

    return x;
}

void apply(vector<int> &b, int l, int r)
{

    int k = (r - l + 1) / 2;

    for (int i = 0; i < k; i++)
    {
        b[l + i + k] = b[l + i];
    }
}

int main(int argc, char const *argv[])
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> vec[i];
        }

        vector<int> b = vec;

        reverse(b.begin() + 1, b.end());
        int ans = 0;
        int x = 1;
        while (x < n)
        {
            if (b[x + 1] == b[1])
            {
                x++;
                continue;
            }

            ans++;
            x *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}
