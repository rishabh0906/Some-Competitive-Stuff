#include<bits/stdc++.h>

using namespace std;


void solve(){

     int n,m;
        cin>>n>>m;

        vector<vector<char>> grid(n,vector<char>(m));


        queue<vector<pair<int,int>>> q;
        vector<pair<int,int>> vec;
        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                cin>>grid[i][j];

                if(grid[i][j]=='R')
                   vec.push_back({i,j});
            }
        }
         
         bool ans;
      for(int i=0;i<vec.size();i++){
       ans=true;

          for(int j=0;j<vec.size();j++){

                   int x=vec[j].first-vec[i].first;
                   int y=vec[j].second-vec[i].second;

                   if(x<0||x>=n||y<0||y>=m)
                   {
                       ans=false;
                       break;
                   }
                   
          }

          if(ans){
              cout<<"Yes"<<endl;
              return;
          }

      }

    
        cout<<"No"<<endl;
          
}

int main(int argc, char const *argv[])
{
    
    int t;
    cin>>t;
    while(t--){

       
       solve();



        
    }
    
    return 0;
}
