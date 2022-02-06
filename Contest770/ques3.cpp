#include <bits/stdc++.h>

using namespace std;

void solve(vector<long long> &a, long long d, long long y)
{
    long long XOR = d;
    for (int i = 0; i < a.size(); i++)
    {

        if (XOR + a[i] <= y)
        {
            XOR += a[i];
        }
        else
        {
            XOR ^= a[i];
        }
    }

    if (XOR == y)
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Bob" << endl;
    }
}

int main(int argc, char const *argv[])
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        solve(a, x, y);
    }
    return 0;
}
