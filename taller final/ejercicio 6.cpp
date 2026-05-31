#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

long long vector[100];  //9,223,372,036,854,775,807 limite
int x;            
//---------------------------------------------------
void ingresar()
{
	system("cls");
	cout << "=== INGRESO DE DATOS ===" << endl;
	cout << "========================" << endl;
	// se les piden los dos primeros valores
	cout << " Ingrese vector[0]:";
	cin >> vector[0];
	cout << " Ingrese vector[1]:";
	cin >> vector[1];
}
//---------------------------------------------------
void calcular()
{ 
	system("cls");
	cout << "=== CALCULANDO VECTOR ===" << endl;
	cout << "=========================" << endl;
	cout << endl;
	// empieza en 2 porque 0 y 1 ya fueron ingresadosy cada par de posiciones es el doble del par anterior
	for(x=2;x<100;x++)
	{
		vector[x] = vector[x-2] * 2;  // doble de la posicion dos lugares atras
		cout << " vector[" << x << "] = " << vector[x-2] << " x 2 = " << vector[x] << endl;
	}
	cout << endl;
	getch();
}
//---------------------------------------------------
void ver()
{
	system("cls");
	cout << "datos del Vector" << endl;
	cout << "================" << endl;
	for(x=0;x<100;x++)// muestra cada posicion con su valor
	{
		cout << " |vector[" << x << "] = " << vector[x];
		cout << "|" << endl;
	}
	getch();  
}
//-----------------------------------------------------------
int main()
{
	ingresar();   
	calcular();   
	ver();        
}
