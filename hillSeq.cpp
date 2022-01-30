#include <iostream>
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
        vector<int> arr(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int maxElement = *max_element(begin(arr), end(arr));
        bool bad = false;
        vector<int> left;
        vector<int> right;
        for (auto it : mp)
        {

            if (it.first == maxElement && it.second > 1)
            {
                bad = true;
                break;
            }
            if (it.second > 2)
            {
                bad = true;
                break;
            }

            if (it.second == 2)
            {
                left.push_back(it.first);
            }

            right.push_back(it.first);
        }

        if (bad)
        {
            cout << -1 << "\n";
            continue;
        }

        sort(left.begin(), left.end());
        sort(right.begin(), right.end(), greater<>());
        for (int i = 0; i < left.size(); i++)
        {
            cout << left[i] << " ";
        }
        for (int ele : right)
            cout << ele << " ";
        cout << "\n";
    }

    return 0;
}
