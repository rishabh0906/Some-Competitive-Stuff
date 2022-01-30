#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {

        string dict;
        cin >> dict;
        string str;
        cin >> str;

        vector<int> hash(26, 0);

        for (int i = 0; i < dict.length(); i++)
        {
            hash[dict[i] - 'a'] = i;
        }

        int cost = 0;
        int prev = hash[str[0] - 'a'];
        for (int i = 1; i < str.length(); i++)
        {

            cost += abs(hash[str[i] - 'a'] - prev);
            prev = hash[str[i] - 'a'];
        }
        cout << cost << endl;
    }
    return 0;
}
