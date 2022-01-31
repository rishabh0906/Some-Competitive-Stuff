#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count0 = 0;
        int n = s.length();
        for (int i = 0; i < s.length(); i++)
        {
            count0 += (s[i] == '0');
        }

        if (count0 > n - count0)
        {
            cout << n - count0 << endl;
        }
        else if (n - count0 > count0)
        {
            cout << count0 << endl;
        }
        else
        {
            cout << count0 - 1 << endl;
        }
    }
    return 0;
}
