#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int vector[20];  // vector global de 20 posiciones
int x;           // variable contadora para los for
//---------------------------------------------------
void ingresar()
{
	system("cls");
	cout << "=== INGRESO DE DATOS ===" << endl;
	cout << "========================" << endl;
	for(x=0;x<20;x++)  // recorre las 20 posiciones
	{
		cout << " Ingrese vector[" << x << "]: ";
		cin >> vector[x];  // guarda el valor ingresado
	}
}
//---------------------------------------------------
void ver()
{
	system("cls");
	cout << "datos del Vector" << endl;
	cout << "================" << endl;
	for(x=0;x<20;x++)  // muestra cada posicion con su valor
	{
		cout << " |vector[" << x << "] = " << vector[x];
		cout << "|" << endl;
	}
	getch();  // pausa hasta presionar una tecla
}
//---------------------------------------------------
void sumarultimo()
{
	system("cls");
	cout << "=== SUMA DEL ULTIMO VALOR ===" << endl;
	cout << "==============================" << endl;
	cout << endl;
	// el ultimo valor es vector[19], la posicion 19
	cout << " Valor base: vector[19] = " << vector[19] << endl;
	cout << endl;
	// recorre todas menos la ultima, que es el valor base
	for(x=0;x<19;x++)
	{
		cout << " vector[" << x << "] = " << vector[x];
		cout << " + " << vector[19];
		vector[x] = vector[x] + vector[19];  // suma el ultimo valor al actual
		cout << " = " << vector[x] << endl;
	}
	cout << endl;
	getch();
}
//-----------------------------------------------------------
int main()
{
	ingresar();      
	ver();           
	sumarultimo();  
	ver();           
}
