#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        vector<long long> vec(n);

        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        unordered_map<long long, int> mp;
        for(int i=0;i<n;i++)
        mp[vec[i]]++;
         bool good=false;
        for(auto it=mp.begin();it!=mp.end();it++){

            if(it->second>=2){
                good=true;
                break;
            }
        }

        if(!good){
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;

    }
}