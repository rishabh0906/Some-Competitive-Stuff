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

        int count = 0;
        for (int i = 1; i < n - 1; i++)
        {

            if (vec[i] > vec[i - 1] && vec[i] > vec[i + 1])
            {

                if (i + 2 < n)
                {
                    vec[i + 1] = max(vec[i], vec[i + 2]);
                }
                else
                {
                    vec[i + 1] = vec[i];
                }

                count++;
            }
        }

        cout << count << endl;
        for (int i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
