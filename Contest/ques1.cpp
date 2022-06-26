#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    
    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;

        if(s.size()<=2){
            
            swap(s[0],s[1]);

            cout<<s[0]<<endl;
        }
        else
          {
              char mn='9';
              for(int i=0;i<s.size();i++){
                  
                  mn=min({mn,s[i]});

              }

              cout<<mn<<endl;
          }
    }
    return 0;
}
