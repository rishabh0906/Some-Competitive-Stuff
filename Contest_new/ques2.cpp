#include <bits/stdc++.h>

using namespace std;

string diff(string str1,string str2){

    int borrow=0;
    int i=str1.length()-1;
    int j=str2.length()-1;
    string res="";
    while(i>=0&&j>=0){
       
       int diff=((str1[i]-'0')-(str2[j]-'0')-borrow);

       if(diff<0){
        diff+=10;
        borrow=1;
       }
       else{
        borrow=0;
       }


        res=to_string(diff)+res;
        
        i--;
        j--;

    }


    while(i>=0){

        int diff=(str1[i]-'0')-borrow;
        if(diff<0){
            borrow=1;
            diff+=10;
        }
        else{
            borrow=0;
        }

        res=to_string(diff)+res;
        i--;
    }

     while(j>=0){

        int diff=(str2[j]-'0')-borrow;
        if(diff<0){
            borrow=1;
            diff+=10;
        }
        else{
            borrow=0;
        }

        res=to_string(diff)+res;
        j--;
    }

    
    int k=0;
    while(k<res.length()&&res[k]=='0'){
        k++;
    }

    return res.substr(k);


}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string str;
        cin >> str;

        string req1="";
        string req2="";

        for(int i=0;i<=n;i++){
            req1+='1';
        }

  string req=diff(req1,str);

   if(req.length()==n){
    cout<<req<<endl;
    continue;
   }

        for(int i=0;i<n;i++){
            req2+='9';
        }

          req=diff(req2,str);
         cout<<req<<endl;
    }

    return 0;
}