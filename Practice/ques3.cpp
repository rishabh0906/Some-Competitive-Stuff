#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        long long C1, C2, C3;
        cin >> C1 >> C2 >> C3;

        long long totalSum = 2 * C1 + 3 * C2 + 4 * C3;
        long long mn = (int)1e15;
        for (int i = 0; i <= C1; i++)
        {
            for (int j = 0; j <= C2; j++)
            {
                for (int k = 0; k <= C3; k++)
                {
                     
                    mn = min(mn, totalSum - (2 * i + 3 * j + 4 * k));
                }
            }
        }

        cout << mn << endl;
    }

    return 0;
}