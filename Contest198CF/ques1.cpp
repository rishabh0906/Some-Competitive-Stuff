#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;

        if(l2>r1||l1>r2){

            cout<<l1+l2<<endl;
        }
        else
        cout<<max(l1,l2)<<endl;

    }
    
    return 0;
}
