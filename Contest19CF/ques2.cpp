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

        vector<int> vec(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        int ans = 0;
        int count0 = 0;
        for (int i = 0; i < n; i++)
        {

            for (int j = i; j < n; j++)
            {
                count0 = 0;
                for (int k = i; k <= j; k++)
                {
                    if (vec[k] == 0)
                        count0++;
                }
                ans += (j - i + 1) + count0;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
