#include <iostream>
#include<bits/stdc++.h>
using namespace std;




int main() {
  int t;
  cin>>t;
  while(t--){
      
      int n,k;
      cin>>n>>k;
       vector<int> vec(k);
       for(int i=0;i<k;i++)
       cin>>vec[i];
       
       vector<int> ans(n+1);
       
       for(int i=1;i<=n;i++){
           ans[i]=i;
       }
       int prev=0;
       for(int i=0;i<k;i++){
           
           
           int temp=ans[vec[i]];
           ans[vec[i]]=prev+1;
           ans[prev+1]=temp;
           prev=vec[i];
       }
       
       for(int i=1;i<=n;i++){
           cout<<ans[i]<<" ";
       }
       cout<<endl;
  }
   
   
	return 0;
}
