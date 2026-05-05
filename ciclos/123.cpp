#include <iostream>
using namespace std;

int main() {
	int N;
	cout << "Enter N: ";
	cin >> N;
	
	int value = 3;
	int direction = -1;
	
	for (int i = 1; i <= N; i++) {
		
		// Print with sign
		if (value > 0) {
			cout << "+" << value << " ";
		} else {
			cout << value << " ";
		}
		
		if (value == 1) direction = 1;
		if (value == 4) direction = -1;
		
		value += direction;
	}
	
	return 0;
}
