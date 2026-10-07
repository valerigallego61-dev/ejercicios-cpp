#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

//Valeri Castillo Gallego

using namespace std;

// ---------------------------------------------------------------
struct prestamo
{
	char codigo[15];
	char nombre[20];
	char apellido[20];
	char libro[40];
	char categoria[20];
	int edad;
	int diasPrestamo;
	float valorMulta;
	prestamo *sig;
};
struct prestamo *P, *cab, *fin;
//-----------------------------------------
void crearInicio()
{
	system("cls");
	P=new prestamo;
	cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
	cout<<"Código del préstamo: "<<endl;
	cin>>P->codigo;
	cout<<" "<<endl;
	cout<<"Nombre del usuario.: "<<endl;
	cin>>P->nombre;
	cout<<" "<<endl;
	cout<<"Apellido del usuario: "<<endl;
	cin>>P->apellido;
	cout<<" "<<endl;
	cout<<"Nombre del libro: "<<endl;
	cin>>P->libro;
	cout<<" "<<endl;
	cout<<"Categoría del libro: "<<endl;
	cin>>P->categoria;
	cout<<" "<<endl;
	cout<<"Edad del usuario: "<<endl;
	cin>>P->edad;
	cout<<" "<<endl;
	cout<<"Número de días del préstamo: "<<endl;
	cin>>P->diasPrestamo;
	if(P->diasPrestamo<=15)
	{
		P->valorMulta=0;
	}
	else
	{
		P->valorMulta=(P->diasPrestamo-15)*1500;
	}
	cout<<" "<<endl;
	
	if (cab==NULL)
	{
		cab=P;
		fin=P;
		P->sig=P;
	}
	else
	{
		P->sig=cab;
		cab=P;
		fin->sig=cab;
	}
	
	getch();

}
//------------------------------------------------------
void crearFin()
{
	system("cls");
	P=new prestamo;
	cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
	cout<<"Código del préstamo: "<<endl;
	cin>>P->codigo;
	cout<<" "<<endl;
	cout<<"Nombre del usuario.: "<<endl;
	cin>>P->nombre;
	cout<<" "<<endl;
	cout<<"Apellido del usuario: "<<endl;
	cin>>P->apellido;
	cout<<" "<<endl;
	cout<<"Nombre del libro: "<<endl;
	cin>>P->libro;
	cout<<" "<<endl;
	cout<<"Categoría del libro: "<<endl;
	cin>>P->categoria;
	cout<<" "<<endl;
	cout<<"Edad del usuario: "<<endl;
	cin>>P->edad;
	cout<<" "<<endl;
	cout<<"Número de días del préstamo: "<<endl;
	cin>>P->diasPrestamo;
	if(P->diasPrestamo<=15)
	{
		P->valorMulta=0;
	}
	else
	{
		P->valorMulta=(P->diasPrestamo-15)*1500;
	}
	cout<<" "<<endl;
	if (fin==NULL)
	{
		cab=P;
		fin=P;
		P->sig=P;
	}
	else
	{
		P->sig=cab;
		fin->sig=P;
		fin=P;
	}
	
	getch();
	
}
	
//---------------------------------------------------
void anexarInicio()
{
	system("cls");
	P=new prestamo;
	cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
	cout<<"Código del préstamo: "<<endl;
	cin>>P->codigo;
	cout<<" "<<endl;
	cout<<"Nombre del usuario.: "<<endl;
	cin>>P->nombre;
	cout<<" "<<endl;
	cout<<"Apellido del usuario: "<<endl;
	cin>>P->apellido;
	cout<<" "<<endl;
	cout<<"Nombre del libro: "<<endl;
	cin>>P->libro;
	cout<<" "<<endl;
	cout<<"Categoría del libro: "<<endl;
	cin>>P->categoria;
	cout<<" "<<endl;
	cout<<"Edad del usuario: "<<endl;
	cin>>P->edad;
	cout<<" "<<endl;
	cout<<"Número de días del préstamo: "<<endl;
	cin>>P->diasPrestamo;
	if(P->diasPrestamo<=15)
	{
		P->valorMulta=0;
	}
	else
	{
		P->valorMulta=(P->diasPrestamo-15)*1500;
	}
	cout<<" "<<endl;
	if (cab==NULL)
	{
		cab=P;
		fin=P;
		P->sig=P;
	}
	else
	{
		P->sig=cab;
		cab=P;
		fin->sig=cab;
	}
	
	getch();
	
}
//------------------------------------------------------
void anexarFin()
{
	system("cls");
	P=new prestamo;
	cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
	cout<<"Código del préstamo: "<<endl;
	cin>>P->codigo;
	cout<<" "<<endl;
	cout<<"Nombre del usuario.: "<<endl;
	cin>>P->nombre;
	cout<<" "<<endl;
	cout<<"Apellido del usuario: "<<endl;
	cin>>P->apellido;
	cout<<" "<<endl;
	cout<<"Nombre del libro: "<<endl;
	cin>>P->libro;
	cout<<" "<<endl;
	cout<<"Categoría del libro: "<<endl;
	cin>>P->categoria;
	cout<<" "<<endl;
	cout<<"Edad del usuario: "<<endl;
	cin>>P->edad;
	cout<<" "<<endl;
	cout<<"Número de días del préstamo: "<<endl;
	cin>>P->diasPrestamo;
	if(P->diasPrestamo<=15)
	{
		P->valorMulta=0;
	}
	else
	{
		P->valorMulta=(P->diasPrestamo-15)*1500;
	}
	cout<<" "<<endl;
	if (cab==NULL)
	{
		cab=P;
		fin=P;
		P->sig=P;
	}
	else
	{
		P->sig=cab;
		fin->sig=P;
		fin=P;
	}
	
	getch();
	
}
//----------------------------------------------------
void verInicio()
{
	system("cls");
	P=cab;
	do
	{
		cout<<"-------------------------------"<<endl;
		cout<<"Código del préstamo:  [ "<<P->codigo<<" ]"<<endl;
		cout<<"Nombre del usuario:   [ "<<P->nombre<<" ]"<<endl;
		cout<<"Apellido del usuario: [ "<<P->apellido<<" ]"<<endl;
		cout<<"Nombre del libro:     [ "<<P->libro<<" ]"<<endl;
		cout<<"Categoría del libro:  [ "<<P->categoria<<" ]"<<endl;
		cout<<"Edad del usuario:     [ "<<P->edad<<" ]"<<endl;
		cout<<"Número de días del préstamo: [ "<<P->diasPrestamo<<" ]"<<endl;
		cout<<"Valor multa: [ "<<P->valorMulta<<" ]"<<endl;
		cout<<"-------------------------------"<<endl;
		P=P->sig;
	} while(P!=cab);
	
	getch();
}
//--------------------------------------------
void buscar()
{
	system("cls");
	char auxcodigo[20];

	int encontrado;
	
	cout<<"-----------------------------"<<endl;
	cout<<"digite el codigo a buscar: ";cin>>auxcodigo;
	cout<<" "<<endl;
	P=cab;
	do
	{   if(strcmp(P->codigo,auxcodigo)==0)
	{
		encontrado=1;
		cout<<"-------------------------------"<<endl;
		cout<<"Código del préstamo:  [ "<<P->codigo<<" ]"<<endl;
		cout<<"Nombre del usuario:   [ "<<P->nombre<<" ]"<<endl;
		cout<<"Apellido del usuario: [ "<<P->apellido<<" ]"<<endl;
		cout<<"Nombre del libro:     [ "<<P->libro<<" ]"<<endl;
		cout<<"Categoría del libro:  [ "<<P->categoria<<" ]"<<endl;
		cout<<"Edad del usuario:     [ "<<P->edad<<" ]"<<endl;
		cout<<"Número de días del préstamo: [ "<<P->diasPrestamo<<" ]"<<endl;
		cout<<"Valor multa: [ "<<P->valorMulta<<" ]"<<endl;
		cout<<"-------------------------------"<<endl;
	}
	P=P->sig;
	} while(P!=cab);
	if(encontrado==0)
	{
		cout<<"No se encontró ese código"<<endl;
	}
	
	getch();
	
}
//-------------------------------------------------
void modificar()
{
	system("cls");
	char auxcodigo[20];
	
	int encontrado;
	
	cout<<"-----------------------------"<<endl;
	cout<<"digite el codigo a modificar: ";cin>>auxcodigo;
	cout<<" "<<endl;
	P=cab;
	do
	{   if(strcmp(P->codigo,auxcodigo)==0)
	{
		encontrado=1;
		cout<<"Código del préstamo: "<<endl;
		cin>>P->codigo;
		cout<<" "<<endl;
		cout<<"Nombre del usuario.: "<<endl;
		cin>>P->nombre;
		cout<<" "<<endl;
		cout<<"Apellido del usuario: "<<endl;
		cin>>P->apellido;
		cout<<" "<<endl;
		cout<<"Nombre del libro: "<<endl;
		cin>>P->libro;
		cout<<" "<<endl;
		cout<<"Categoría del libro: "<<endl;
		cin>>P->categoria;
		cout<<" "<<endl;
		cout<<"Edad del usuario: "<<endl;
		cin>>P->edad;
		cout<<" "<<endl;
		cout<<"Número de días del préstamo: "<<endl;
		cin>>P->diasPrestamo;
		if(P->diasPrestamo<=15)
		{
			P->valorMulta=0;
		}
		else
		{
			P->valorMulta=(P->diasPrestamo-15)*1500;
		}
		cout<<" "<<endl;
	}
	P=P->sig;
	} while(P!=cab);
	if(encontrado==0)
	{
		cout<<"No se encontró ese código"<<endl;
	}
	
	getch();
	
}
//---------------------------------
void estadistica()
{
	system("cls");
	int total=0, sinMulta=0, conMulta=0;
	int sumaDias=0, mayorMulta=0;
	float totalMultas=0, porcentaje=0, promedio=0;

	char categorias[50][20];
	int contador[50];
	int numCat=0;
	int i, existe, mayor, pos;
	
	if(cab==NULL)
	{
		cout<<"No hay prestamos registrados."<<endl;
		getch();
		return;
	}
	
	P=cab;
	do
	{
		total++;
		sumaDias=sumaDias+P->diasPrestamo;
		
		
		if(P->diasPrestamo<=15)
		{
			P->valorMulta=0;
			sinMulta++;
		}
		else
		{
			P->valorMulta=(P->diasPrestamo-15)*1500;
			conMulta++;
		}
		
		totalMultas=totalMultas+P->valorMulta;
		
		if(P->valorMulta>mayorMulta)
		{
			mayorMulta=P->valorMulta;
		}
		
		// contar categorias
		existe=0;
		for(i=0;i<numCat;i++)
		{
			if(strcmp(categorias[i],P->categoria)==0)
			{
				contador[i]++;
				existe=1;
			}
		}
		if(existe==0)
		{
			strcpy(categorias[numCat],P->categoria);
			contador[numCat]=1;
			numCat++;
		}
		
		P=P->sig;
	} while(P!=cab);
	
	porcentaje=(float(conMulta)/total)*100;
	promedio=float(sumaDias)/total;
	

	mayor=contador[0];
	pos=0;
	for(i=1;i<numCat;i++)
	{
		if(contador[i]>mayor)
		{
			mayor=contador[i];
			pos=i;
		}
	}
	
	cout<<"========================================"<<endl;
	cout<<"        ESTADISTICAS DE PRESTAMOS"<<endl;
	cout<<"========================================"<<endl;
	cout<<"Total de prestamos: "<<total<<endl;
	cout<<"Prestamos sin multa: "<<sinMulta<<endl;
	cout<<"Prestamos con multa: "<<conMulta<<endl;
	cout<<"Porcentaje con multa: "<<porcentaje<<"%"<<endl;
	cout<<"Total recaudado: $"<<totalMultas<<endl;
	cout<<"Promedio de dias de prestamo: "<<promedio<<" dias"<<endl;
	cout<<"Mayor multa: $"<<mayorMulta<<endl;
	cout<<"Categoria mas prestada: "<<categorias[pos]<<endl;
	cout<<"========================================"<<endl;
	
	getch();
}
//--------------------------------------------------
int main ()
{
	int op=1;
	while(op!=0)
	{
		system("cls");
		cout<<"-------------------------------"<<endl;
		cout<<"-----CONTROL DE PRESTAMOS------"<<endl<<endl;
		cout<<"-------------------------------"<<endl;
		cout<<"<0>Para salir"<<endl;
		cout<<"<1>CREAR POR INICIO"<<endl;
		cout<<"<2>CREAR POR FIN"<<endl;
		cout<<"<3>ANEXAR POR INICIO"<<endl;
		cout<<"<4>ANEXAR POR FIN "<<endl;
		cout<<"<5>VER POR INICIO"<<endl;
		cout<<"<6>BUSCAR"<<endl;
		cout<<"<7>MODIFICAR"<<endl;
		cout<<"<8>ESTADISTICA"<<endl;
		cout<<"---------------------------"<<endl;
		cout<<"DIGITE LA OPCION QUE DESEA:"<<endl<<endl;
		cin>>op;
		switch(op)
		{
		case 1:crearInicio();break;
     	case 2:crearFin();break;
        case 3:anexarInicio();break;
        case 4:anexarFin();break;
        case 5:verInicio();break;
		case 6: buscar();break;
		case 7: modificar();break;
		case 8: estadistica();break;
		}
    }
}
