#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	int matriz[10][10];
	int x, y;
	double suma = 0;// doble precisión
	double promedio;
	
	// Ingresar valores a la matriz
	cout << "=== MATRIZ 10x10 ===" << endl;
	cout << "Ingrese los 100 valores de la matriz:" << endl << endl;
	
	for (x= 0; x< 10;x++) {
		for (y = 0; y< 10;y++) {
			cout << "Posicion [" << x << "][" << y << "]: ";
			cin >> matriz[x][y];
			suma = suma + matriz[x][y];
		}
	}
	
	// Calcular el promedio
	promedio = suma / 100.0;
	
	// Mostrar la matriz
	cout << endl << "=== CONTENIDO DE LA MATRIZ ===" << endl;
	for (x = 0; x< 10;x++) {
		for (y = 0;y< 10; y++) {
			cout << matriz[x][y] << "\t";
		}
		cout << endl;
	}
	
	// Mostrar resultados
	cout << endl << "Suma total: " << suma << endl;
	cout << "Promedio: " << promedio << endl;
	
	return 0;
}
