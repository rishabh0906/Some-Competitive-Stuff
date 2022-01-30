#include<iostream>

using namespace std;

int main()
{
	string str;
	cin>>str;
	if(str.length()<=2)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		int a=str[0]-'A';
		int b=str[1]-'A';
		int i;
		for( i=2;i<str.length();i++)
		{
			int c=str[i]-'A';
			if((a+b)%26!=c)
			{
			     break;	
			}
			a=b;
			b=c;
		}
		if(i==str.length())
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
	
}
