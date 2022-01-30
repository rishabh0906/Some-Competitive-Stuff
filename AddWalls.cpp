#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<char>> vec(n, vector<char>(m));
    queue<pair<int, int>> q;
    int freecells = 0;
    int x = -1, y = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];

            if (vec[i][j] == '.')
            {
                freecells++;
                if (x == -1)
                {
                    x = i;
                    y = j;
                }
            }
        }
    }

    vector<vector<bool>> vis(n, vector<bool>(m));

    q.push({x, y});
    vis[x][y] = true;
    int count = 0;
    vector<vector<int>> dir = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
    while (q.size() > 0)
    {

        auto top = q.front();
        q.pop();
        count++;

        if (count > freecells - k)
        {
            vec[top.first][top.second] = 'X';
        }

        for (int i = 0; i < 4; i++)
        {

            int r = top.first + dir[i][0];
            int c = top.second + dir[i][1];

            if (r >= 0 && c >= 0 && r < n && c < m && vec[r][c] == '.' && vis[r][c] == false)
            {
                vis[r][c] = true;
                q.push({r, c});
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << vec[i][j];
        }
        cout << endl;
    }

    return 0;
}
