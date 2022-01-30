#include<iostream>

using namespace std;


int solve()
{
	long long n;
	cin>>n;
		long long set=n/4;
	n=n%4;
	
	long long total=set*58;
	
if(total>0)
{
	total-=n*6;
}
	 if(n==1)
	{
		total+=20;
	}
	else if(n==2)
	{
	 total+=40;
    }
	 else if(n==3)
	 {
	 	total+=56;
	 }
	 
	 cout<<total<<endl;
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
