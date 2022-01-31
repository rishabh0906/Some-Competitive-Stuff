#include<iostream>

using namespace std;

int main()
{
	
	int a;
	cin>>a;
	int low=1;
	int high=a;
	int res=0;
	int res1=0;
	int res2=0;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(mid*mid==a)
		{
			res=mid;
			break;
		}
		else if(mid*mid<a)
		{
			res1=low;
			low=mid+1;
		}
		else
		{     res2=high;
			high=mid-1;
		}
	}
	if(res!=0)
	{
		cout<<res<<endl;
	}
	else
	{
		if(a-(res1*res1)<(res2*res2)-a)
		{
			cout<<res1<<endl;
		}
		else
		{
			cout<<res2<<endl;
		}
	}
	
	return 0;
}
