#include<bits/stdc++.h>


using namespace std;


void solve(){
    
    int n;
    cin>>n;
    vector<int> vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
       
       vector<int> ans(n+1);
         unordered_map<int,int> mp;
         unordered_map<int,int> freq;
         for(int i=0;i<n;i++){
               
               if(mp.find(vec[i])==mp.end()){
                   mp[vec[i]]=i;
                   freq[vec[i]]=1;
               }
               else {
                
                      
                      if((i-mp[vec[i]]-1)%2==0){
                        freq[vec[i]]++;
                        mp[vec[i]]=i;
                      }
                      

                
                
               }

               

               ans[vec[i]]=max(ans[vec[i]],freq[vec[i]]);
            
         } 


for(int i=1;i<=n;i++){
    cout<<ans[i]<<" ";
}

cout<<endl;


}

int main(){

  int t;
  cin>>t;
  while(t--){
    solve();
  }


}