//#31
#include <iostream>
#include <conio.h>

using namespace std;

int n,x=5,s=0;

int main()
{
	cout<<"Digite N=";
	cin>>n;
	
	do
	{
		if(x%2==0)
		{
			cout<<"-"<<x;
			s=s-x;
		}
		else
		{
			cout<<"+"<<x;
			s=s+x;
		}
		
		x--;
		
		if(x==0)
			x=5;
		
		n--;
		
	}while(n>0);
	
	cout<<"\nLa suma es:"<<s;
	getch();
}
