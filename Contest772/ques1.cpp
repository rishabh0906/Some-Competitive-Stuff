#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
  

  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      vector<int> v(n);
        int ans=0;
      for(int i=0;i<n;i++){
          cin>>v[i];
          ans|=v[i];
      }

      cout<<ans<<endl;


  }
    return 0;
}

