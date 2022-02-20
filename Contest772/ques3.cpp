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

        if (vec[n - 2] > vec[n - 1])
        {
            cout << -1 << endl;
            continue;
        }
        if (is_sorted(vec.begin(), vec.end()))
        {
            cout << 0 << endl;
            continue;
        }
        else if (vec[n - 1] >= 0)
        {

            cout << n - 2 << endl;

            for (int i = 0; i < n - 2; i++)
            {

                cout << i + 1 << " " << n - 1 << " " << n << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
