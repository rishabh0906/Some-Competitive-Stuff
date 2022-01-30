#include<iostream>

using namespace std;

class Sol
{
public :
	int gcd(int n,int m)
	{
		while(m>0)
		{
			int temp=n;
			n=m;
			m=temp%m;
		}
		return n;
	}
	int lcm(int a,int b)
	{
		int hcf=gcd(a,b);
		return (a*b)/hcf;
	}
	
};

int  main()
{
	int n,m;
	cin>>n>>m;
	Sol obj;
	int hcf=obj.gcd(n,m);
	int lcm=obj.lcm(n,m);
	cout<<hcf<<" "<<lcm<<endl;
	return 0;
}
