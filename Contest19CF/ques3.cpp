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
        vector<long long> vec(n);
        priority_queue<long long> pq;
        long long TotalEven = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if (i > 0 && i < n - 1)
            {

                if (vec[i] % 2 != 0)
                {
                    pq.push(vec[i]);
                }
                else
                {
                    TotalEven += vec[i];
                }
            }
        }
  long long op = 0;
        bool isGood = true;
        while (pq.size() > 0)
        {

            long long top = pq.top();
            pq.pop();

            op++;
            TotalEven -= 2;
            if (TotalEven < 0)
            {
                isGood = false;
                break;
            }

            TotalEven += (top + 1);
        }

        op += TotalEven / 2;

        if (isGood)
        {
            cout << op << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
