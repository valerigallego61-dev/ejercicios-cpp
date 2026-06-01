#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main() 
{
	int matA[6][6];
	int x, y;
	int sumaFila, multColUMNAS;
	
	cout << "=== INGRESO MATRIZ 6x6 ===" << endl;
	for (x = 0; x < 6; x++)
		for (y = 0; y < 6; y++) {
			cout << "MatA[" << x << "][" << y << "]: ";
			cin >> matA[x][y];
	}
		
		// SUMA DE FILAS
		cout << endl << "--- SUMA DE FILAS ---" << endl;
		for (x = 0; x < 6; x++) {
			sumaFila = 0;
			for (y = 0; y < 6; y++)
				sumaFila = sumaFila + matA[x][y];
				cout << "Suma fila " << x << ": " << sumaFila << endl;
		}
		
		//MULTIPLICACION DE COLUMNAS
		cout << endl << "--- MULTIPLICACION DE COLUMNAS ---" << endl;
		for (y = 0; y < 6; y++) {
			multColUMNAS = 1;
			for (x = 0; x < 6; x++)
				multColUMNAS = multColUMNAS * matA[x][y];
				cout << "Multiplicacion columna " << y << ": " << multColUMNAS << endl;
		}
		
		return 0;
}
