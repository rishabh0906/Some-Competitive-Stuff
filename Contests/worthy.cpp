#include<iostream>
#include<bits/stdc++.h>
#define mxn (int) 1e3+5
typedef long long ll;
using namespace std;

ll mat[mxn][mxn];
ll sum[mxn][mxn];


ll query(int r1,int c1,int d)
{
	ll r2=r1+d-1;
	ll c2=c1+d-1;
	ll res=sum[r2][c2]-sum[r1-1][c2]-sum[r2][c1-1]+sum[r1-1][c1-1];

	return res;
}

int sumMat(int n,int m)
{
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			sum[i][j]= mat[i][j]+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
		}
	}
	
}

int solve()
{
	ll n,m,k;
	cin>>n>>m>>k;
	memset(mat,0,sizeof(mat));
	memset(sum,0,sizeof(sum));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>mat[i][j];
		}
	}
	sumMat(n,m);
	ll counter=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
		int maxlength=min(n-i+1,m-j+1);
		int l=0;
		int r=maxlength;
		while(l<r)
		{
			int mid=(l+r+1)/2;
			if(query(i,j,mid)/(mid*mid)<k)
			{
				l=mid;
			}
			else
			{
				r=mid-1;
			}
		}
		counter+=(maxlength-l);
		
		}
	}
	cout<<counter<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	solve();
    }
	return 0;
	
}
