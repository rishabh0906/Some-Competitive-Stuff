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
        vector<int> vec(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        int m;
        cin >> m;
       long long moves = 0LL;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            moves =(moves+x)%n;
        }

       
        cout<<vec[moves]<<endl;
    }
    return 0;
}
