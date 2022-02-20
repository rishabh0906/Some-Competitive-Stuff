#include <bits/stdc++.h>

using namespace std;

int turns(vector<int> &stones, int cap)
{

    sort(stones.begin(), stones.end());

    int l = 0, r = stones.size() - 1;

    int count = 0;
    while (l <= r)
    {

        if (l == r)
        {
            count++;
            break;
        }

        if (stones[l] + stones[r] > cap)
        {
            r--;
        }
        else
        {
            l++;
            r--;
        }
        count++;
    }

    return count;
}

int main()
{

    int n;
    cin >> n;
    int cap;
    cin >> cap;
    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        cin >> res[i];
    }

    cout << turns(res, cap) << endl;

    return 0;
}