#include <iostream>
using namespace std;

int main() {
	int N;
	cout << "Enter N: ";
	cin >> N;
	
	int value = 1;
	
	for (int i = 1; i <= N; i++) {
		
		if (value % 2 == 0) {
			cout << "+" << value << " ";
		} else {
			cout << "-" << value << " ";
		}
		
		value++;
		
		if (value > 6) value = 1;
	}
	
	return 0;
}

