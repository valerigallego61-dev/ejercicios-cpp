#include <iostream>
using namespace std;

int main() {
	int N;
	cout << "Enter N: ";
	cin >> N;
	
	int a = 2;
	int b = -2;
	int c;
	
	for (int i = 1; i <= N; i++) {
		
		if (i == 1) {
			cout << "+" << a << " ";
		}
		else if (i == 2) {
			cout << b << " ";
		}
		else {
			c = a + b;
			
			if (i % 2 == 0) {
				cout << c << " ";
			} else {
				cout << "+" << c << " ";
			}
			
			a = b;
			b = c;
		}
	}
	
	return 0;
}
