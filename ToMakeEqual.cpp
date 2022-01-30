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

        int val1 = *max_element(vec.begin(), vec.end());
        int val2 = *min_element(vec.begin(), vec.end());

        cout<<val1 - val2 << endl;
    }
    return 0;
}
