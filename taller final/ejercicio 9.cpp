#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() 
{
	int matA[5][5], matB[5][5], matC[5][5];
	int x, y;
	
	cout << "=== INGRESO MATRIZ A ===" << endl;
	for (x = 0; x < 5; x++)
		for (y = 0; y < 5; y++) {
			cout << "MatA[" << x << "][" << y << "]: ";
			cin >> matA[x][y];
	}
		
		cout << endl << "=== INGRESO MATRIZ B ===" << endl;
		for (x = 0; x < 5; x++)
			for (y = 0; y < 5; y++) {
				cout << "MatB[" << x << "][" << y << "]: ";
				cin >> matB[x][y];
		}
			
			// SUMA
			cout << endl << "--- SUMA (A + B) ---" << endl;
			for (x = 0; x < 5; x++) {
				for (y = 0; y < 5; y++) {
					matC[x][y] = matA[x][y] + matB[x][y];
					cout << matC[x][y] << "\t";
				}
				cout << endl;
			}
			
			// RESTA
			cout << endl << "--- RESTA (A - B) ---" << endl;
			for (x = 0; x < 5; x++) {
				for (y = 0; y < 5; y++) {
					matC[x][y] = matA[x][y] - matB[x][y];
					cout << matC[x][y] << "\t";
				}
				cout << endl;
			}
			
			// MULTIPLICACION
			cout << endl << "--- MULTIPLICACION (A * B) ---" << endl;
			for (x = 0; x < 5; x++) {
				for (y = 0; y < 5; y++) {
					matC[x][y] = matA[x][y] * matB[x][y];
					cout << matC[x][y] << "\t";
				}
				cout << endl;
			}
			
			// DIVISION
			cout << endl << "--- DIVISION (A / B) ---" << endl;
			for (x = 0; x < 5; x++) {
				for (y = 0; y < 5; y++) {
					if (matB[x][y] != 0) {
						matC[x][y] = matA[x][y] / matB[x][y];
						cout << matC[x][y] << "\t";
					} else {
						cout << "eRror";
					}
				}
				cout << endl;
			}
			
			return 0;
}

