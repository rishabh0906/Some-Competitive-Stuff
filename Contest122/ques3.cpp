#include <bits/stdc++.h>

using namespace std;

int knapSack(int W, vector<int> &wt, vector<int> &val, int n)
{
    int i, w;
    vector<vector<int>> K(n + 1, vector<int>(W + 1));
    for (int i = 1; i <= n; i++)
    {

        K[i][0] = (wt[i - 1] == 0 ? val[i - 1] : 0);
    }
    // Build table K[][] in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] +
                                  K[i - 1][w - wt[i - 1]],
                              K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}

int minOp(int b)
{

    int p = (int)log2(b);
    int count = 0;
    while (b)
    {
        if (b & 1)
            count++;
        b /= 2;
    }

    return p + count - 1;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> b(n);
        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        vector<int> op(n);

        for (int i = 0; i < n; i++)
        {

            op[i] = minOp(b[i]);
        }

        int ans = knapSack(k, op, c, n);
        cout << ans << endl;
    }
    return 0;
}
