#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;
//-----------------------------------------------------------


struct dobles
{
	char cedula[15];
	char nombre[15];
	char apellido[15];
	int edad;
	float n1,n2,n3,n4,nf;
    struct dobles *sig,*ant;
	
};
struct dobles *cab,*fin,*inicio,*P;
//------------------------------------------------------
void crearInicio()
{
	cab=NULL;
	fin=NULL;
	char continuar='s';
	while(continuar=='s')
	{
		system("cls");
		P=new dobles;
		cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
		cout<<"CEDULA: "<<endl;
		cin>>P->cedula;
		cout<<" "<<endl;
		cout<<"Nombre : "<<endl;
		cin>>P->nombre;
		cout<<" "<<endl;
		cout<<"Apellido :"<<endl;
		cin>>P->apellido;
		cout<<" "<<endl;
		cout<<"Edad : "<<endl;
		cin>>P->edad;
		cout<<" "<<endl;
		cout<<"nota1 (10%) equivalente a asistencia : "<<endl;
		cin>>P->n1;
		cout<<" "<<endl;
		cout<<"nota2 (20%) Talleres en clase : "<<endl;
		cin>>P->n2;
		cout<<" "<<endl;
		cout<<"nota3 (30%) Talleres trabajo extra clase: "<<endl;
		cin>>P->n3;
		cout<<" "<<endl;
		cout<<"nota4 (40%) Evaluaci�n final: "<<endl;
		cin>>P->n4;
		cout<<" "<<endl;
		cout<<"NotaFinal: "<<endl;
		cin>>P->nf;
		cout<<" "<<endl;
		if(inicio==NULL)
		{
			inicio=P;
			fin=P;
			P->sig=NULL;
			P->ant=NULL;
		}
		else
		{
			P->sig=inicio;
			inicio->ant=P;
			P->ant=NULL;
			inicio=P;
		}
		cout<<"digite la <s> para continuar: ";
		cin>>continuar;
	}
}
//-----------------------------------------------------
void crearFin()
{
	cab=NULL;
	fin=NULL;
	
	char continuar='s';
	while(continuar=='s')
	{
		system("cls");
		P=new dobles;
		cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
		cout<<"CEDULA: "<<endl;
		cin>>P->cedula;
		cout<<" "<<endl;
		cout<<"Nombre : "<<endl;
		cin>>P->nombre;
		cout<<" "<<endl;
		cout<<"Apellido :"<<endl;
		cin>>P->apellido;
		cout<<" "<<endl;
		cout<<"Edad : "<<endl;
		cin>>P->edad;
		cout<<" "<<endl;
		cout<<"nota1 (10%) equivalente a asistencia : "<<endl;
		cin>>P->n1;
		cout<<" "<<endl;
		cout<<"nota2 (20%) Talleres en clase : "<<endl;
		cin>>P->n2;
		cout<<" "<<endl;
		cout<<"nota3 (30%) Talleres trabajo extra clase: "<<endl;
		cin>>P->n3;
		cout<<" "<<endl;
		cout<<"nota4 (40%) Evaluaci�n final: "<<endl;
		cin>>P->n4;
		cout<<" "<<endl;
		cout<<"NotaFinal: "<<endl;
		cin>>P->nf;
		cout<<" "<<endl;
		if(fin==NULL)
		{
			inicio=P;
			fin=P;
			P->sig=NULL;
			P->ant=NULL;
		}
		else
		{
			P->ant=fin;
			fin->sig=P;
			P->sig=NULL;
			fin=P;
		}
		cout<<"digite la <s> para continuar: ";
		cin>>continuar;
	}
}
//-------------------------------------------------
void verInicio()
{
	
		system("cls");
		P=inicio;
		while(P!=NULL)
		{
			cout<<"-------------------------------"<<endl;
			cout<<"cedula: [ "<<P->cedula<<" ]"<<endl;
			cout<<"nombre: [ "<<P->nombre<<" ]"<<endl;
			cout<<"apellido: [ "<<P->apellido<<" ]"<<endl;
			cout<<"edad: [ "<<P->edad<<" ]"<<endl;
			cout<<"NOTA 1: [ "<<P->n1<<" ]"<<endl;
			cout<<"NOTA 2: [ "<<P->n2<<" ]"<<endl;
			cout<<"NOTA 3: [ "<<P->n3<<" ]"<<endl;
			cout<<"NOTA 4: [ "<<P->n4<<" ]"<<endl;
			cout<<"NOTA FINAL: [ "<<P->nf<<" ]"<<endl;
			cout<<"-------------------------------"<<endl;
			P=P->sig;
		}
		
		getch();
}
//----------------------------------------------------
void verFin()
{
	system("cls");
	P=fin;
	while(P!=NULL)
	{
		cout<<"-------------------------------"<<endl;
		cout<<"cedula: [ "<<P->cedula<<" ]"<<endl;
		cout<<"nombre: [ "<<P->nombre<<" ]"<<endl;
		cout<<"apellido: [ "<<P->apellido<<" ]"<<endl;
		cout<<"edad: [ "<<P->edad<<" ]"<<endl;
		cout<<"NOTA 1: [ "<<P->n1<<" ]"<<endl;
		cout<<"NOTA 2: [ "<<P->n2<<" ]"<<endl;
		cout<<"NOTA 3: [ "<<P->n3<<" ]"<<endl;
		cout<<"NOTA 4: [ "<<P->n4<<" ]"<<endl;
		cout<<"NOTA FINAL: [ "<<P->nf<<" ]"<<endl;
		cout<<"-------------------------------"<<endl;
		P=P->ant;
	}
	
	getch();
}	
//---------------------------------------------------
void anexarInicio()
{
	cab=NULL;
	fin=NULL;
	
	system("cls");
	P=new dobles;
	cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
	cout<<"CEDULA: "<<endl;
	cin>>P->cedula;
	cout<<" "<<endl;
	cout<<"Nombre : "<<endl;
	cin>>P->nombre;
	cout<<" "<<endl;
	cout<<"Apellido :"<<endl;
	cin>>P->apellido;
	cout<<" "<<endl;
	cout<<"Edad : "<<endl;
	cin>>P->edad;
	cout<<" "<<endl;
	cout<<"nota1 (10%) equivalente a asistencia : "<<endl;
	cin>>P->n1;
	cout<<" "<<endl;
	cout<<"nota2 (20%) Talleres en clase : "<<endl;
	cin>>P->n2;
	cout<<" "<<endl;
	cout<<"nota3 (30%) Talleres trabajo extra clase: "<<endl;
	cin>>P->n3;
	cout<<" "<<endl;
	cout<<"nota4 (40%) Evaluaci�n final: "<<endl;
	cin>>P->n4;
	cout<<" "<<endl;
	cout<<"NotaFinal: "<<endl;
	cin>>P->nf;
	cout<<" "<<endl;
	if(inicio==NULL)
	{
		inicio=P;
		fin=P;
		P->sig=NULL;
		P->ant=NULL;
	}
	else
	{
		P->sig=inicio;
		inicio->ant=P;
		P->ant=NULL;
		inicio=P;
	}
}

//----------------------------------------------++
void anexarFin()
{
	
	
	system("cls");
	P=new dobles;
	cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
	cout<<"CEDULA: "<<endl;
	cin>>P->cedula;
	cout<<" "<<endl;
	cout<<"Nombre : "<<endl;
	cin>>P->nombre;
	cout<<" "<<endl;
	cout<<"Apellido :"<<endl;
	cin>>P->apellido;
	cout<<" "<<endl;
	cout<<"Edad : "<<endl;
	cin>>P->edad;
	cout<<" "<<endl;
	cout<<"nota1 (10%) equivalente a asistencia : "<<endl;
	cin>>P->n1;
	cout<<" "<<endl;
	cout<<"nota2 (20%) Talleres en clase : "<<endl;
	cin>>P->n2;
	cout<<" "<<endl;
	cout<<"nota3 (30%) Talleres trabajo extra clase: "<<endl;
	cin>>P->n3;
	cout<<" "<<endl;
	cout<<"nota4 (40%) Evaluaci�n final: "<<endl;
	cin>>P->n4;
	cout<<" "<<endl;
	cout<<"NotaFinal: "<<endl;
	cin>>P->nf;
	cout<<" "<<endl;
	if(fin==NULL)
	{
		inicio=P;
		fin=P;
		P->sig=NULL;
		P->ant=NULL;
	}
	else
	{
		P->ant=fin;
		fin->sig=P;
		P->sig=NULL;
		fin=P;
	}
}
//-----------------------------------------------------
void buscar()
{
	system("cls");
	char auxcedula[20];
	
	int encontrado;
	
	cout<<"-----------------------------"<<endl;
	cout<<"digite la cedula a buscar: ";cin>>auxcedula;
	cout<<" "<<endl;
	P=cab;
	do
	{   if(strcmp(P->cedula,auxcedula)==0)
	{
		encontrado=1;
		cout<<"-------------------------------"<<endl;
		cout<<"CEDULA:  [ "<<P->cedula<<" ]"<<endl;
		cout<<"Nombre :   [ "<<P->nombre<<" ]"<<endl;
		cout<<"Apellido : [ "<<P->apellido<<" ]"<<endl;
		cout<<"EDAD:     [ "<<P->edad<<" ]"<<endl;
		cout<<"NOTA 1:  [ "<<P->n1<<" ]"<<endl;
		cout<<"NOTA 2:     [ "<<P->n2<<" ]"<<endl;
		cout<<"NOTA 3: [ "<<P->n3<<" ]"<<endl;
		cout<<"NOTA 4: [ "<<P->n4<<" ]"<<endl;
		cout<<"NOTA FINAL: [ "<<P->nf<<" ]"<<endl;
		cout<<"-------------------------------"<<endl;
	}
	P=P->sig;
	} while(P!=cab);
	if(encontrado==0)
	{
		cout<<"No se encontr� esa cedula"<<endl;
	}
	
	getch();
	
}
//-----------------------------------------------------
void modificar()
{
	system("cls");
	char auxcedula[20];
	cout<<"-----------------------------"<<endl;
	cout<<"digite la cedula a modificar: ";cin>>auxcedula;
	cout<<" "<<endl;
	P=cab;
	do
	{
		if(strcmp(P->cedula,auxcedula)==0)
		{
			cout<<"CEDULA: "<<endl;
			cin>>P->cedula;
			cout<<" "<<endl;
			cout<<"Nombre : "<<endl;
			cin>>P->nombre;
			cout<<" "<<endl;
			cout<<"Apellido :"<<endl;
			cin>>P->apellido;
			cout<<" "<<endl;
			cout<<"Edad : "<<endl;
			cin>>P->edad;
			cout<<" "<<endl;
			cout<<"nota1 (10%) equivalente a asistencia : "<<endl;
			cin>>P->n1;
			cout<<" "<<endl;
			cout<<"nota2 (20%) Talleres en clase : "<<endl;
			cin>>P->n2;
			cout<<" "<<endl;
			cout<<"nota3 (30%) Talleres trabajo extra clase: "<<endl;
			cin>>P->n3;
			cout<<" "<<endl;
			cout<<"nota4 (40%) Evaluaci�n final: "<<endl;
			cin>>P->n4;
			cout<<" "<<endl;
			cout<<"NotaFinal: "<<endl;
			cin>>P->nf;
			cout<<" "<<endl;
			
		}
		P=P->sig;
	} while(P!=cab);
	
	
	getch();
}
//----------------------------------------------------
int main ()
{
	int op=1;
	while(op!=0)
	{
		system("cls");
		cout<<"-------------------------------"<<endl;
		cout<<"<0>Para salir"<<endl;
		cout<<"<1>CREAR POR INICIO"<<endl;
		cout<<"<2>CREAR POR FIN"<<endl;
		cout<<"<3>VER POR INICIO"<<endl;
		cout<<"<4>VER POR FIN"<<endl;
		cout<<"<5>ANEXAR POR INICIO"<<endl;
		cout<<"<6>ANEXAR POR FIN "<<endl;
		cout<<"<6>BUSCAR"<<endl;
		cout<<"<7>MODIFICAR"<<endl;
		cout<<"---------------------------"<<endl;
		cout<<"DIGITE LA OPCION QUE DESEA:"<<endl<<endl;
		cin>>op;
		switch(op)
		{
		case 1:crearInicio();break;
		case 2:crearFin();break;
		case 3:verInicio();break;
		case 4:verFin();break;
		case 5: anexarInicio();break;
		case 6: anexarFin();break;
		case 7: buscar();break;
		case 8:modificar();break;
		}
	}
}
