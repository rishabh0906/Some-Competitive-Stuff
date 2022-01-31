#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define Maxn (int)1e6 + 3
vector<bool> in(Maxn);
vector<int> best_gcd(Maxn);
int main(int argc, char const *argv[])
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        int x;
        cin >> x;
        in[x] = true;
    }
    int cnt = 0;
    for (int i = 1; i < Maxn; i++)
    {

        for (int j = i; j < Maxn; j+=i)
        {
            if (in[j])
                best_gcd[i] = __gcd(best_gcd[i], j);
        }

        cnt += best_gcd[i] == i;
    }

    cout << cnt - n << endl;

    return 0;
}
