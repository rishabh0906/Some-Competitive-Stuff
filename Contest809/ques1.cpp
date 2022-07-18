#include<bits/stdc++.h>


using namespace std;


void solve(){

    int n,m;
    cin>>n>>m;

    vector<int> vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    string s;
    s+='#';
     for(int i=0;i<m;i++){
        s+='B';
     } 
     


     for(int i=0;i<n;i++){

        int pos=vec[i];

        int to_change=min(pos,m+1-pos);
        int not_change=max(pos,m+1-pos);
           if(s[to_change]=='B'){
            s[to_change]='A';
           }
           else{
            s[not_change]='A';
           }
     }


     cout<<s.substr(1);
     cout<<endl;
}

int main(){

  int t;
  cin>>t;
  while(t--){
    solve();
  }


}