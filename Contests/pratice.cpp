#include<iostream>

using namespace std;

class time
{

int hrs;
int min;

public :
      	
      	
void update(time *t1);
void update1(time t1);
void input();	
void display();
};
void time ::display()
{
	cout<<hrs<<" "<<min<<endl;
}
void time::input()
{
          cin>>hrs>>min;
}
void time::update1(time t1)
{      
     
 
	(t1).hrs=40;
	(t1).min=40*60;
}
void time::update(time *t1)
{
	(*t1).hrs=40;
	(*t1).min=40*60;
}

int main()
{
	time t1;
	t1.input();
	t1.display();
	t1.update1(t1);           //pass by value
	t1.display();
	t1.update(&t1);           //pass by reference
	t1.display();
	return 0;
}
