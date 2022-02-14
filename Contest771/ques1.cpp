#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        vector<int> vec(n+1);

        for(int i=1;i<=n;i++)
        cin>>vec[i];
        int idx=-1;
        for(int i=1;i<=n;i++){
           
           if(i!=vec[i]){
               idx=i;
               break;
           }
        }

        if(idx==-1){
            for(int i=1;i<=n;i++){
                cout<<vec[i]<<" ";
            }
            cout<<endl;
            continue;
        }
            int idx2=-1;
        for(int i=n;i>=1;i--){
                
                if(vec[i]==idx){
                    idx2=i;
                   break;
                }
        }


        reverse(vec.begin()+idx,vec.begin()+idx2+1);

        for(int i=1;i<=n;i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;

        
    }
    return 0;
}
