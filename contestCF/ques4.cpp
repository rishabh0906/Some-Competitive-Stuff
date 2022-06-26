#include <bits/stdc++.h>
using namespace std;

string multiply(string str, int d)
{

    int i = str.size() - 1;
    string ans = "";

    int carry = 0;
    while (i >= 0)
    {

        int digit = str[i] - '0';
        int sum = (carry + digit * d);
        carry = sum / 10;
        ans=to_string(sum%10)+ans;
        i--;
    }

    if (carry != 0)
    {
        ans = to_string(carry)+ ans;
    }

    cout<<ans<<endl;

    return ans;
}

int main(int argc, char const *argv[])
{


        int n;
        cin >> n;
        long long x;
        cin>>x;
        string str=to_string(x);
                
        int count = str.length();
        int ans = 0;

        while (count < n)
        {
             char ch='0';
            for(int i=0;i<str.length();i++){
                  ch=max({ch,str[i]});
            }
               
            if(ch=='1')
               break;
             int prev=str.size();
            str = multiply(str, ch - '0');
            count+=str.size()-prev;
            ans++;
        }

        if(count!=n){
            cout<<-1<<endl;
        }
        else
         cout<<ans<<endl;
    

    return 0;
}
