#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() 
{
	int matriz1[5][5];
	int matriz2[5][5];
	int x, y;
	
	
	cout << "===INGRESO MATRIZ 1===" << endl;
	for (x = 0; x < 5; x++) 
	{
		for (y = 0; y < 5; y++)
		{
			cout << "Matriz1 [" << x << "][" << y << "]: ";
			cin >> matriz1[x][y];
		}
	}
	
	
	cout << endl << "===INGRESO MATRIZ 2===" << endl;
	for (x = 0; x < 5; x++) {
		for (y = 0; y < 5; y++) {
			cout << "Matriz2 [" << x << "][" << y << "]: ";
			cin >> matriz2[x][y];
		}
	}
	
	
	for (x = 0; x < 5; x++) {
		for (y = 0; y < 5; y++) {
			matriz1[x][y] = matriz1[x][y] - 2;
			matriz2[x][y] = matriz2[x][y] - 2;
		}
	}
	
	
	cout << endl << "=== MATRIZ 1despues de restar 2) ===" << endl;
	for (x = 0; x < 5; x++) {
		for (y = 0; y < 5; y++) {
			cout << matriz1[x][y] << "|";
		}
		cout << endl;
	}
	
	
	cout << endl << "=== MATRIZ 2 (despues de restar 2)===" << endl;
	for (x = 0; x < 5; x++) {
		for (y = 0; y < 5; y++) {
			cout << matriz2[x][y] << "|";
		}
		cout << endl;
	}
	
	return 0;
}
