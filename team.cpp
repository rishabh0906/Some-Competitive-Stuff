#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int t;
    cin >> t;
    while (t--)
    {

        int a, b;
        cin >> a >> b;

        if (a > b)
        {
            swap(a, b);
        }
        int ans = 0;
        if (a == b)
        {
            ans = a / 2;
        }
        else
        {

            if (min(a / 2, b / 2) > min(a, b / 3))
            {
                ans = min(a / 2, b / 2);
            }
            else
            {

                ans = min(a, b / 3);
                a -= ans;
                b -= 3 * ans;
                ans += min(a / 2, b / 2);
            }
        }

        cout << ans << endl;
    }
    return 0;
}
