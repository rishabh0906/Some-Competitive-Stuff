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

        if (k > (n / 2 + n % 2))
        {
            cout << -1 << endl;
            continue;
        }

        vector<vector<char>> vec(n, vector<char>(n, '.'));

        for (int i = 0; i < n && k-- > 0; i += 2)
        {
            vec[i][i] = 'R';
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << vec[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
