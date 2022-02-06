#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        if (n == 1 && k == 1)
        {
            cout << "YES" << endl;
            cout << 1 << endl;
            continue;
        }
       

        if (n % 2 == 1 && k > 1)
        {
            cout << "NO" << endl;
            continue;
        }
        vector<vector<int>> ans(n, vector<int>(k, 0));

        int odd = 1;
        int even = 2;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                int idx = 0;
                for (int j = 0; j < k; j++)
                {
                    ans[i][j] = odd;
                    odd += 2;
                }
            }
            else
            {
                int idx = 0;
                for (int j = 0; j < k; j++)
                {
                    ans[i][j] = even;
                    even += 2;
                }
            }
        }

        cout << "YES" << endl;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
