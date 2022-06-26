#include <iostream>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;

        long long ans=(m*(m-1))/2LL;
        ans=ans+m*(n*(n+1))/2LL;
        cout<<ans<<endl;
    }
}
