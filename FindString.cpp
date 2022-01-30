#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool solve(string str, string fir, string sec)
{

    int i = 0;
    int n = str.length();
    for (i = 1; i < n; i++)
    {

        if (str[i - 1] == fir[0] && str[i] == fir[1])
        {
            break;
        }
    }

    if (i == n)
        return false;

    bool ans = false;
    int j = i + 2;
    for (; j < n; j++)
    {

        if (str[j - 1] == sec[0] && str[j] == sec[1])
        {
            ans = true;
            break;
        }
    }

    return ans;
}

int main(int argc, char const *argv[])
{

    string str;
    cin >> str;
    if (str.length() < 4)
    {
        cout << "NO" << endl;
    }
    else
    {

        bool ans = solve(str, "AB", "BA") || solve(str, "BA", "AB");

        cout << (ans == true ? "YES" : "NO") << endl;
    }

    return 0;
}
