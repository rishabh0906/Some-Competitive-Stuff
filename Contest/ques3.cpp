#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;

        
        vector<vector<int>> grid(n, vector<int>(m));
    vector<vector<int>> temp(n,vector<int>(m));   


        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                cin >> grid[i][j];
                temp[i][j]=grid[i][j];
            }
        }
if(m==1)
        {
            cout<<1<<" "<<1<<endl;
            continue;
        }

        for(int i=0;i<n;i++){

            sort(temp[i].begin(),temp[i].end());
        }

        for(int i=0;i<n;i++){

            int swaps=0;

            for(int j=0;j<n;j++){

                if(temp[i][j]!=grid[i][j])
                swaps++;
            }

            if(swaps/2==1){
                  
            }


        }


    
    return 0;
}
