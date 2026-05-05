//#28
#include <iostream>
using namespace std;

int main()
{
	int n;
	int a = 1, b = 1, c;
	int s = 0;
	
	cout<<"Digite N: ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<"-"<<a;
			s = s - a;
		}
		else
		{
			cout<<"+"<<a;
			s = s + a;
		}
		
		c = a + b;
		a = b;
		b = c;
	}
	
	cout<<"\nLa suma es: "<<s;
	
	return 0;
}
