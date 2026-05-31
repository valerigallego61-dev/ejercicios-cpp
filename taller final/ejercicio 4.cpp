#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int vector[10];
int x;
//---------------------------------------------------
void ingresar()
{
	system("cls");
	cout << "=== INGRESO DE DATOS ===" << endl;
	cout << "========================" << endl;
	for(x=0;x<10;x++)
	{
		cout << " Ingrese vector[" << x << "]: ";
		cin >> vector[x];
	}
}
//---------------------------------------------------
void ver()
{
	system("cls");
	cout << "datos del Vector" << endl;
	cout << "================" << endl;
	for(x=0;x<10;x++)
	{
		cout << " |vector[" << x << "] = " << vector[x];
		cout << "|" << endl;
	}
	getch();
}
//---------------------------------------------------
void sumarPrimero()
{
	system("cls");
	cout << "=== SUMA DEL PRIMER VALOR ===" << endl;
	cout << "==============================" << endl;
	cout << endl;
	cout << " Valor base:vector[0] = " << vector[0] << endl;
	// empieza en 1 porque vector[0] es el valor base no se modifica 
	cout << endl;
	for(x=1;x<10;x++)
	{
		cout << " vector[" << x << "] = " << vector[x];
		cout << " + " << vector[0];
		vector[x] = vector[x] + vector[0];// suma el primer valor al actual
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
	sumarPrimero();
	ver();
}
