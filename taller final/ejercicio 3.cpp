#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int vector[20];
int x;

//---------------------------------------------------
void ingresar()
{
	system("cls");
	cout << "=== INGRESO DE DATOS ===" << endl;
	cout << "========================" << endl;
	for(x=0;x<20;x++)
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
	for(x=0;x<20;x++)
	{
		cout << " |vector[" << x << "] = " << vector[x];
		cout << "|" << endl;
	}
	getch();
}

//---------------------------------------------------
void proceso()
{
	system("cls");
	cout << endl << endl;
	
	// Orden de ingreso
	cout << " Valores en orden de ingreso:" << endl;
	cout << "==============================" << endl;
	for(x=0;x<20;x++)
	{
		cout << " " << vector[x];
		if(x < 19) cout << ",";
	}
	cout << endl << endl;
	
	// Orden de reves
	cout << " Valores en orden de rreves:" << endl;
	cout << "============================" << endl;
	for(x = 20;x >=0;x--)   // empieza desde la ultima posicion
		//Lo importante es el for al revés, que empieza desde la posición 20 y va bajando hasta 0:
	{
		cout << " " << vector[x];
		if(x> 0) cout << ",";
	}
	
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
