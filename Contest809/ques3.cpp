#include<bits/stdc++.h>

using namespace std;



int recursion(vector<int> &vec,int idx,int k,vector<int> &memo){
        
        if(idx==vec.size())
            {
                return  *max_element(vec.begin(),vec.end())-*min_element(vec.begin(),vec.end());
            }

            if(memo[idx]!=-1)
                return memo[idx];
  
         int ans=(int) 1e9;
    for(int i=1;i<=k;i++){
               int val=vec[idx];
               vec[idx]=val/i;       
        ans=min(ans,recursion(vec,idx+1,k,memo));
           

           vec[idx]=val;
    }

    return memo[idx]=ans;
}



void solve(){

    int n,k;
    cin>>n>>k;

    vector<int> vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    vector<int> memo(n+1,-1);
int ans =recursion(vec,0,k,memo);

cout<<ans<<endl;

}
    


int main(){
   

   int t;
   cin>>t;
   while(t--){

    solve();
   }

    return 0;
}