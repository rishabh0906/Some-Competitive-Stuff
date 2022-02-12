#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int t;
    cin >> t;
    while (t--)
    {

        int k;
        cin >> k;
        int lcm = (int)1e9;
        int a, b;
        for (int i = 1; i * i <= k; i++)
        {

            if (k % i == 0)
            {

                int gcd = __gcd(i, k / i);
                if (k / gcd < lcm)
                {
                    lcm = k / gcd;
                    a = i;
                    b = k / i;
                }
            }
        }
        if (b > a)
            swap(a, b);
        cout << a << " " << b << endl;
    }

    return 0;
}
