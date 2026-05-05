//#26
#include <iostream>
#include <conio.h>

using namespace std;

int n,x=1,s=0;

int main()
{
	cout<<"Digite N=";
	cin>>n;
	
	do
	{
		cout<<"+"<<x;
		s=s+x;
		
		x++;
		
		if(x>3)
			x=1;
		
		n--;
		
	}while(n>0);
	
	cout<<"\nLa suma es:"<<s;
	getch();
}

