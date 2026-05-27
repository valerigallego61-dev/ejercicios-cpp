#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int vectorA[10], vectorB[10];
int sumaA, sumaB, sumaTotal;
int x;

//---------------------------------------------------
void ingresar()
{
	system("cls");
	cout << "=== INGRESO VECTOR A ===" << endl;
	cout << "========================" << endl;
	for(x=0;x<10;x++)
	{
		cout << " Ingrese vectorA[" <<x<< "]: ";
		cin >> vectorA[x];
	}
	
	system("cls");
	cout << "=== INGRESO VECTOR B ===" << endl;
	cout << "========================" << endl;
	for(x=0;x<10;x++)
	{
		cout << " Ingrese vectorB[" << x << "]: ";
		cin >> vectorB[x];
	}
}

//---------------------------------------------------
void ver()
{
	system("cls");
	cout << "datos del Vector A y Vector B" << endl;
	cout << "==============================" << endl;
	cout << " Pos | VectorA | VectorB " << endl;
	cout << "==============================" << endl;
	for(x=0;x<10;x++)
	{
		cout << "  [" << x << "]  |   " << vectorA[x] << "     |   " << vectorB[x] << endl;
	}
	getch();
}

//---------------------------------------------------
void proceso()
{
	system("cls");
	sumaA = 0;
	sumaB = 0;
	sumaTotal = 0;
	
	cout << endl << endl;
	cout << " Suma de posiciones IMPARES" << endl;
	cout << "============================" << endl;
	cout << " Pos - VectorA - VectorB " << endl;
	cout << "============================" << endl;
	
	for(x=0;x<10;x++)
	{//Con el operador módulo %, que devuelve el residuo de una división:
		if(x % 2 != 0)   // posiciones impares: 1,3,5,7,9
		{
			cout << "  [" << x << "]  |   " << vectorA[x] << "     |   " << vectorB[x] << endl;
			sumaA     = sumaA + vectorA[x];
			sumaB     = sumaB + vectorB[x];
		}
	}
	
	sumaTotal = sumaA + sumaB;
	
	cout << endl << " Suma  de posiciones impares VectorA : " << sumaA;
	cout << endl << " Suma de posiciones impares VectorB : " << sumaB;
	cout << endl << " Suma Total (A+ B)              : " << sumaTotal;
	cout << endl;
	getch();
}

//-----------------------------------------------------------
int main()
{
	ingresar();
	ver();
	proceso();
}
