#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 7 == 0)
        {
            cout << n << endl;
            continue;
        }

        if (n < 14)
        {
            cout << 14 << endl;
            continue;
        }

        if (n > 994)
        {
            cout << 994 << endl;
            continue;
        }

        int r = n % 7;
        int d = n % 10;

        if (d - r >= 3)
        {
            n = n - r;
        }
        else
        {
            n = n + (7 - r);
        }

        cout << n << endl;
    }
    return 0;
}
