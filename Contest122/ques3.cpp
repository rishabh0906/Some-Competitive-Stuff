#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        ll hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc >> hm >> dm >> k >> w >> a;
        bool ok = false;
        for (int i = 0; i <= k; i++)
        {
            ll HC = hc + i * a;
            ll DC = dc + (k - i) * w;

            if (hm / DC + (hm % DC != 0) <= HC / dm + (HC % dm != 0))
            {
                cout << "YES" << endl;
                ok = true;
                break;
            }
        }

        if (!ok)
            cout << "NO" << endl;
    }
    return 0;
}
