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

        int p = (int)log2(n-1);

        for (int i = n - 1; i >= (1 << p); i--)
        {
            cout << i << " ";
        }

        cout << 0 << " ";

        for (int i = 1; i <= (1 << p) - 1; i++)
        {
            cout << i << " ";
        }
        cout<<endl;
    }

    return 0;
}