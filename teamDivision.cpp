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

        vector<long long> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());

        int idx1 = n / 2;
        int idx2 = n / 2 - 1;
        cout << vec[idx1] - vec[idx2] + 1;
    }
    return 0;
}
