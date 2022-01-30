#include<iostream>
#include<math.h>
using namespace std;


class Sol
{
public :
	void quad(int a,int b,int c)
	{
		if(a==0)
		{
			cout<<"Invalid  input "<<endl;
			return ;
		}
		int D=(b*b)-(4*a*c);
		double root1=(double)((-b+sqrt(D))/(2*a));
		double root2=(double )((-b-sqrt(D))/(2*a));
		if(D<0)
		{
			cout<<"imaginary roots ";
		}
		else 
		{
			cout<<root1<<" "<<root2<<endl;
		}
	}
	
};

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	Sol obj;
	obj.quad(a,b,c);
	return 0;
}
