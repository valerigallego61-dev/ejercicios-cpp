//#32
#include <iostream>
#include <conio.h>

using namespace std;

int n,x=2,s=0;

int main()
{
	cout<<"Digite N=";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		if(x==2)
		{
			cout<<"+"<<x;
			s=s+x;
		}
		else
		{
			cout<<"-"<<x;
			s=s-x;
		}
		
		x=x+2;
		
		if(x>6)
			x=2;
	}
	
	cout<<"\nLa suma es:"<<s;
	getch();
}
