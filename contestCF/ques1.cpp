#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int mx = 0;
        vector<int> alice(n);

        for (int i = 0; i < n; i++)
        {
            cin >> alice[i];
            mx = max({mx, alice[i]});
        }
        int m;
        cin >> m;
        int mx2 = 0;

        vector<int> bob(m);

        for (int i = 0; i < m; i++)
        {
            cin >> bob[i];
            mx2 = max({mx2, bob[i]});
        }

        if (mx > mx2)
        {
            cout << "Alice" << endl;
            cout << "Alice" << endl;
        }
        else if (mx2 > mx)
        {
            cout << "Bob" << endl;
            cout << "Bob" << endl;
        }
        else
        {

            cout << "Alice" << endl;
            cout << "Bob" << endl;
        }
    }

    return 0;
}