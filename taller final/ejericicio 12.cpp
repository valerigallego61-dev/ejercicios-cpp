#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main() 
{
	int mat5[5][5];
	int vec5[5];
	int x, y;
	
	cout << "=== INGRESO MATRIZ 5x5 ===" << endl;
	for (x = 0; x < 5; x++)
		for (y = 0; y < 5; y++) {
			cout << "Mat5[" << x << "][" << y << "]: ";
			cin >> mat5[x][y];
	}
		
		// MULTIPLICACION DE COLUMNas
		for (y = 0; y < 5; y++) {
			vec5[y] = 1;
			for (x = 0; x < 5; x++)
				vec5[y] = vec5[y] * mat5[x][y];
		}
		
		cout << endl << "--- MULTIPLICACION DE COLUMNAS ---" << endl;
		for (y = 0; y < 5; y++)
			cout << "Vector[" << y << "] = " << vec5[y] << endl;
		
		return 0;
}
