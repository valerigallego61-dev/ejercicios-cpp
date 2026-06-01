#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
	int mat10[10][10];
	int vector10[10];
	int x, y;
	
	cout << "=== INGRESO MATRIZ 10x10 ===" << endl;
	for (x = 0; x < 10; x++)
		for (y = 0; y < 10; y++) {
			cout << "Mat10[" << x << "][" << y << "]: ";
			cin >> mat10[x][y];
	}
		
		// SUMA DE FILAS del VECTOR
		for (x = 0; x < 10; x++) {
			vector10[x] = 0;
			for (y = 0; y < 10; y++)
				vector10[x] = vector10[x] + mat10[x][y];
		}
		
		cout << endl << "--- SUMA DE FILAS GUARDADA en el VECTOR ---" << endl;
		for (x = 0; x < 10; x++)
			cout << "Vector[" << x << "] = " << vector10[x] << endl;
		
		return 0;
}
