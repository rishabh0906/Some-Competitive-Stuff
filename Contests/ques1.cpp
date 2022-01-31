#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
           cin>>vec[i];
        }

        long long ans=0;
        long long count=0;
        for(int i=1;i<=n;i++){
              if(i+ans<vec[i-1]){
                 ans= (vec[i-1]-i);
        
              }
        }

        cout<<ans<<endl;
    }
    return 0;
}
