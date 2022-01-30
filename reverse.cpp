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

        if (n % 2 == 0)
        {
            cout << 0 << endl;
            continue;
        }

        bool even = false;
        int pos = 0;
        int count = 0;
        while (n)
        {

            count++;
            int rem = n % 10;
            if (rem % 2 == 0)
            {
                even = true;
                pos = count;
            }

            n /= 10;
        }

        if (!even)
        {
            cout << -1 << endl;
            continue;
        }

        if (pos == count)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}
