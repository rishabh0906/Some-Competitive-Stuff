#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        bool inc = true;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            inc &= a[i] > a[i - 1];
        }
        if (n % 2 == 0 or !inc)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
