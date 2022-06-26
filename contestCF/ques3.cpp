#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
     
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         vector<int> a(n);
         vector<int> b(n);

           for(int i=0;i<n;i++){
               cin>>a[i];
           }
           for(int i=0;i<n;i++){
               cin>>b[i];
           }

           vector<pair<int,int>> swaps;
bool bad=false;
           for(int i=0;i<n;i++){

               for(int j=i+1;j<n;j++){

                   if(a[i]>a[j]&&b[i]>=b[j]){
                      
                      swap(a[i],a[j]);
                      swap(b[i],b[j]);
                      swaps.push_back({i+1,j+1});

                   }
                   else if(a[i]>a[j]&&b[i]<b[j]){
                     bad=true;
                   }
               }
           }

           if(bad){
               cout<<-1<<endl;
               continue;
           }
                
           for(int i=0;i<n;i++){

               for(int j=i+1;j<n;j++){
                   if(b[i]>b[j]&&a[i]>=a[j]){
                      
                      swap(a[i],a[j]);
                      swap(b[i],b[j]);
                      swaps.push_back({i+1,j+1});

                   }
                   else if(b[i]>b[j]&&a[i]<a[j]){
                     bad=true;
                   }
               }
           }

           if(bad){
               cout<<-1<<endl;
               continue;
           }

           cout<<swaps.size()<<endl;
           for(int i=0;i<swaps.size();i++){
               cout<<swaps[i].first<<" "<<swaps[i].second<<endl;
           }
           cout<<endl;

         
     }
    return 0;
}
