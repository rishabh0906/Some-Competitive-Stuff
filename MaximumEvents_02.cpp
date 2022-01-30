#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maximumEventPairs(vector<vector<int>> &nums, int l, int r)
{
    vector<int> prefix(r - l + 1);
    prefix[0] = nums[l][2];
    for (int i = 1; i < prefix.size(); i++)
    {

        prefix[i] = max(prefix[i - 1], nums[l + i][2]);
    }

    int ans = 0;
    for (int i = l; i <= r; i++)
    {

        int si = l, ei = i - 1;
        int idx = -1;
        while (si <= ei)
        {
            int mid = (si + ei) / 2;

            if (nums[mid][1] < nums[i][0])
            {
                idx = mid;
                si = mid + 1;
            }
            else
            {
                ei = mid - 1;
            }
        }

        ans = max(ans, (idx != -1 ? (nums[i][2] + prefix[idx - l]) : nums[i][2]));
    }

    return ans;
}

int maxValue_Uti(vector<vector<int>> &events, int idx, int k)
{

    if (idx == events.size() || k == 0)
        return 0;

    int ans1 = maxValue_Uti(events, idx + 1, k);

    int l = idx + 1, r = events.size();

    while (l < r)
    {

        int mid = (l + r) / 2;

        if (events[mid][0] > events[idx][1])
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    int ans2 = events[idx][2] + maxValue_Uti(events, r, k - 1);

    return max(ans1, ans2);
}

int maxValue(vector<vector<int>> &events, int k)
{
    sort(events.begin(), events.end());

    return maxValue_Uti(events, 0, k);
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> events{{1, 1, 1}, {2, 2, 2}, {3, 3, 3}, {4, 4, 4}};

    maxValue(events, 2);
    return 0;
}
