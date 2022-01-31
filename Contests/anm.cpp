#include<iostream>
#include<unordered_map>

using namspace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		unordered_map<int,int> mp;
		for(int i=0;i<n;i++)
		{
			int c;
			cin>>c;
			arr[i]=c;
			mp[c]++;
		}
		int anm;
		for(auto it=mp.begin();it!=mp.end();it++)
		{
			if(it->second==1)
			{
				anm=it->second;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]==anm)
			{
				cout<<i+1<<endl;
				break;
			}
		}
		
		
	}
	return 0;
	
}
