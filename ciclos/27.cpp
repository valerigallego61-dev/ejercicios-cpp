//#27
#include <iostream>
#include <conio.h>

using namespace std;

int n,x=1,c=0,s=0;

int main()
{
	cout<<"Digite N=";
	cin>>n;
	
	while(x<=n)
	{
		cout<<"+"<<x;
		s=s+x;
		c++;
		
		if(c==2)
		{
			x++;
			c=0;
		}
	}
	
	cout<<"\nLa suma es:"<<s;
	getch();
}
