#include<iostream>

using namespace std;

class  Sol
{
public :
int solve()
{
	int n,m,p,q;
	cin>>n>>m>>p>>q;
	int mat1[n][m],mat2[p][q], res[n][q];
	
	cout<<"Enter First Matrix: "<<endl;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>mat1[i][j];
		}
	}
		cout<<"Enter Second Matrix: "<<endl;
		for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			cin>>mat2[i][j];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<q;j++)
		{
			int sum=0;
			for(int k=0;k<m;k++)
			{
				sum+=mat1[i][k]*mat2[k][j];
			}
			res[i][j]=sum;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<q;j++)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
};

int main()
{
	Sol obj;
	obj.solve();
	
	
	return 0;
}
