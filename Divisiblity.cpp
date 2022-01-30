#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cin >> str;
    int val = 0;
    int ans = -1;
    for (int i = 0; i < str.length(); i++)
    {

        val = (str[i] - '0');

        if (val % 8 == 0)
        {
            ans = val;
            break;
        }
        for (int j = i + 1; j < str.length(); j++)
        {
            val = (str[i] - '0') * 10 + (str[j] - '0');
            if (val % 8 == 0)
            {
                ans = val;
                break;
            }
            for (int k = j + 1; k < str.length(); k++)
            {

                val = (str[i] - '0') * 100 + (str[j] - '0') * 10 + (str[k] - '0');

                if (val % 8 == 0)
                {
                    ans = val;
                    break;
                }
            }

            if (ans % 8 == 0)
                break;
        }

        if (ans % 8 == 0)
            break;
    }

    if (ans != -1)
    {
        cout << "YES" << endl;
        cout << ans << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}
