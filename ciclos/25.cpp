//#25
#include <iostream>
#include <conio.h>

using namespace std;

int n,x=2,s=0,c=1;

int main()
{
	cout<<"Digite N=";
	cin>>n;
	
	while(x<=n)
	{
		if(c==1)
		{
			cout<<"+"<<x;
			s=s+x;
			c=2;
		}
		else if(c==2)
		{
			cout<<"-"<<x;
			s=s-x;
			c=3;
		}
		else
		{
			cout<<"+"<<x;
			s=s+x;
			c=1;
		}
		
		x=x+2;
	}
	
	cout<<"\nLa suma es:"<<s;
	getch();
}
