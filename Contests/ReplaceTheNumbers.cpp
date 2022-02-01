#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int q;
    cin >> q;
    vector<int> t(q), x(q), y(q);

    for (int i = 0; i < q; i++)
    {

        cin >> t[i] >> x[i];
        if (t[i] == 2)
        {
            cin >> y[i];
        }
    }

    vector<int> ans;

    vector<int> p((int) 5e5+4);

    iota(p.begin(), p.end(), 0);

    for (int i = q - 1; i >= 0; i--)
    {

        if (t[i] == 1)
        {
            ans.push_back(p[x[i]]);
        }
        else
        {
            p[x[i]] = p[y[i]];
        }
    }

    reverse(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
