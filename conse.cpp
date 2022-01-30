#include<iostream>

using namespace std;

int solve()
{
	int n,k;
	cin>>n>>k;
	string str;
	cin>>str;
	int pref[n];
	pref[0]=str[0]=='*';
	for(int i=1;i<n;i++)
	{
		if(str[i]=='*')
		{
			pref[i]=pref[i-1]+1;
		}
		else
		{
			pref[i]=0;
		}
	}
	int i;
	for( i=0;i<n;i++)
	{
	if(pref[i]>=k)
	{
		cout<<"yes"<<endl;
		break;
	}	
	}
	if(i==n)
	{
		cout<<"no"<<endl;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
