#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int CeilIndex(std::vector<long long> &v, int l, int r, int key)
{
    while (r > l)
    {
        int m = l + (r - l) / 2;
        if (v[m] > key)
            r = m;
        else
            l = m + 1;
    }

    return r;
}

int LongestIncreasingSubsequenceLength(std::vector<long long> &v)
{
    if (v.size() == 0)
        return 0;

    std::vector<long long> tail(v.size(), 0);
    int length = 1; // always points empty slot in tail

    tail[0] = v[0];
    for (size_t i = 1; i < v.size(); i++)
    {

        // new smallest value
        if (v[i] < tail[0])
            tail[0] = v[i];

        // v[i] extends largest subsequence
        else if (v[i] > tail[length - 1])
            tail[length++] = v[i];

        // v[i] will become end candidate of an existing
        // subsequence or Throw away larger elements in all
        // LIS, to make room for upcoming greater elements
        // than v[i] (and also, v[i] would have already
        // appeared in one of LIS, identify the location
        // and replace it)
        else
            tail[CeilIndex(tail, -1, length - 1, v[i])] = v[i];
    }

    return length;
}
void merge(vector<long long> &vec1, vector<long long> &vec2, vector<long long> &ans)
{

    int i = 0, j = 0;

    while (i < vec1.size() && j < vec2.size())
    {

        if (vec1[i] < vec2[j])
        {
            ans.push_back(vec1[i++]);
        }
        else
        {
            ans.push_back(vec2[j++]);
        }
    }

    while (i < vec1.size())
    {
        ans.push_back(vec1[i++]);
    }

    while (j < vec2.size())
    {
        ans.push_back(vec2[j++]);
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;
        vector<long long> vec1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec1[i];
        }
        vector<long long> vec2(m);
        for (int i = 0; i < m; i++)
        {
            cin >> vec2[i];
        }

        vector<long long> ans;
        merge(vec1, vec2, ans);

        int an = LongestIncreasingSubsequenceLength(ans);
        cout << an << endl;
    }
    return 0;
}
