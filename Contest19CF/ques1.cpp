
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
        vector<pair<int, int>> vec(n);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vec[i] = {x, i};
        }
        bool isSorted = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (vec[i].first > vec[i + 1].first)
            {
                isSorted = false;
                break;
            }
        }

        if (isSorted)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(vec.begin(), vec.end());
        int idx = -1;
        bool isGood = false;
        for (int i = 0; i < n; i++)
        {

            idx = max(idx, vec[i].second);

            if (idx > i)
            {
                isGood = true;
                break;
            }
        }
        if (isGood)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
