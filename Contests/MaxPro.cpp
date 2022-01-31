#include <bits/stdc++.h>

using namespace std;
// namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &ans)
{

    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            ans.push_back(a[i++]);
        }
        else
        {
            ans.push_back(b[j++]);
        }
    }

    while (i < a.size())
    {
        ans.push_back(a[i++]);
    }

    while (j < b.size())
    {
        ans.push_back(b[j++]);
    }
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                swap(a[i], b[i]);
            }
        }

        long long val1 = *max_element(a.begin(), a.end());
        long long val2 = *max_element(b.begin(), b.end());

        cout<<val1*val2<<endl;
    }
    return 0;
}
