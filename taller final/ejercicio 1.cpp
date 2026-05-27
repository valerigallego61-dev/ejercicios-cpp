#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int vector[10];
float suma, promedio;
int x;

//---------------------------------------------------
void ingresar()
{
	system("cls");
	cout << "=== INGRESO DE DATOS ===" << endl;
	cout << "========================" << endl;
	suma = 0;
	for(x=0;x<10;x++)
	{
		cout<< " Ingrese vector[" << x << "]: ";
		cin>> vector[x];
		suma = suma + vector[x];
	}
}

//---------------------------------------------------
void ver()
{
	system("cls");
	cout << "datos del vector:" << endl;
	cout << "================" << endl;
	for(x=0;x<10;x++)
	{
		cout << " |vector[" << x << "] = " << vector[x];
		cout << "|" << endl;
	}
}

//---------------------------------------------------
void proceso()
{
	system("cls");
	cout <<endl<<endl;
	cout << " Calculo de Promedio y Valores bajos" << endl;
	cout << "=====================================" << endl;
	
	promedio = suma / 10;
	
	cout << endl<< " Suma total : " << suma<<endl;
	cout << " Promedio   : " << promedio << endl;
	
	cout << endl << " Valores por debajo del proemdio (" << promedio << "):" << endl;
	cout << "=====================================" << endl;
	
	for(x=0;x<10;x++)
	{
		if(vector[x] < promedio)
		{
			cout << " |vector[" << x << "] = " << vector[x] << "|" << endl;
		}
	}
	
	cout << endl << " Promedio es " << promedio;
	getch();
}

//-----------------------------------------------------------
int main()
{
	ingresar();
	ver();
	proceso();
}
