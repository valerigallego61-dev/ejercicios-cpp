//#29
#include <iostream>
using namespace std;

int main()
{
	int n;
	int x = 1;
	int s = 0;
	int i = 1;
	
	cout<<"Digite N: ";
	cin>>n;
	
	while(i <= n)
	{
		if(x % 2 == 0)
		{
			cout<<"-"<<x;
			s = s - x;
		}
		else
		{
			cout<<"+"<<x;
			s = s + x;
		}
		
		x++;
		
		if(x > 4)
			x = 1;
		
		i++;
	}
	
	cout<<"\nLa suma es: "<<s;
	
	return 0;
}
