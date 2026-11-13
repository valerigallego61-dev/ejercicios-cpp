#include <iostream>
#include <conio.h>
#include <stdlib.h>
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
struct dobles *fin,*inicio,*P;
//------------------------------------------------------
void crearInicio()
{
	inicio=NULL;
	fin=NULL;
	char continuar='s';
	while(continuar=='s')
	{
		system("cls");
		P=new dobles;
		cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
		cout<<"CEDULA: "<<endl;
		cin>>P->cedula;
		cout<<"Nombre : "<<endl;
		cin>>P->nombre;
		cout<<"Apellido :"<<endl;
		cin>>P->apellido;
		cout<<"Edad : "<<endl;
		cin>>P->edad;
		cout<<"nota1 (10%) equivalente a asistencia : "<<endl;
		cin>>P->n1;
		cout<<"nota2 (20%) Talleres en clase : "<<endl;
		cin>>P->n2;
		cout<<"nota3 (30%) Talleres trabajo extra clase: "<<endl;
		cin>>P->n3;
		cout<<"nota4 (40%) Evaluacion final: "<<endl;
		cin>>P->n4;
		P->nf=P->n1*0.1+P->n2*0.2+P->n3*0.3+P->n4*0.4;
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
	inicio=NULL;
	fin=NULL;
	char continuar='s';
	while(continuar=='s')
	{
		system("cls");
		P=new dobles;
		cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
		cout<<"CEDULA: "<<endl;
		cin>>P->cedula;
		cout<<"Nombre : "<<endl;
		cin>>P->nombre;
		cout<<"Apellido :"<<endl;
		cin>>P->apellido;
		cout<<"Edad : "<<endl;
		cin>>P->edad;
		cout<<"nota1 (10%) equivalente a asistencia : "<<endl;
		cin>>P->n1;
		cout<<"nota2 (20%) Talleres en clase : "<<endl;
		cin>>P->n2;
		cout<<"nota3 (30%) Talleres trabajo extra clase: "<<endl;
		cin>>P->n3;
		cout<<"nota4 (40%) Evaluacion final: "<<endl;
		cin>>P->n4;
		P->nf=P->n1*0.1+P->n2*0.2+P->n3*0.3+P->n4*0.4;
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
	system("cls");
	P=new dobles;
	cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
	cout<<"CEDULA: "<<endl;
	cin>>P->cedula;
	cout<<"Nombre : "<<endl;
	cin>>P->nombre;
	cout<<"Apellido :"<<endl;
	cin>>P->apellido;
	cout<<"Edad : "<<endl;
	cin>>P->edad;
	cout<<"nota1 (10%) equivalente a asistencia : "<<endl;
	cin>>P->n1;
	cout<<"nota2 (20%) Talleres en clase : "<<endl;
	cin>>P->n2;
	cout<<"nota3 (30%) Talleres trabajo extra clase: "<<endl;
	cin>>P->n3;
	cout<<"nota4 (40%) Evaluacion final: "<<endl;
	cin>>P->n4;
	P->nf=P->n1*0.1+P->n2*0.2+P->n3*0.3+P->n4*0.4;
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
//----------------------------------------------
void anexarFin()
{
	system("cls");
	P=new dobles;
	cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
	cout<<"CEDULA: "<<endl;
	cin>>P->cedula;
	cout<<"Nombre : "<<endl;
	cin>>P->nombre;
	cout<<"Apellido :"<<endl;
	cin>>P->apellido;
	cout<<"Edad : "<<endl;
	cin>>P->edad;
	cout<<"nota1 (10%) equivalente a asistencia : "<<endl;
	cin>>P->n1;
	cout<<"nota2 (20%) Talleres en clase : "<<endl;
	cin>>P->n2;
	cout<<"nota3 (30%) Talleres trabajo extra clase: "<<endl;
	cin>>P->n3;
	cout<<"nota4 (40%) Evaluacion final: "<<endl;
	cin>>P->n4;
	P->nf=P->n1*0.1+P->n2*0.2+P->n3*0.3+P->n4*0.4;
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
	int encontrado=0;
	
	cout<<"-----------------------------"<<endl;
	cout<<"digite la cedula a buscar: ";cin>>auxcedula;
	P=inicio;
	while(P!=NULL)
	{
		if(strcmp(P->cedula,auxcedula)==0)
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
	}
	if(encontrado==0)
	{
		cout<<"No se encontro esa cedula"<<endl;
	}
	getch();
}
//-----------------------------------------------------
void modificar()
{
	system("cls");
	char auxcedula[20];
	int encontrado=0;
	
	cout<<"-----------------------------"<<endl;
	cout<<"digite la cedula a modificar: ";cin>>auxcedula;
	P=inicio;
	while(P!=NULL)
	{
		if(strcmp(P->cedula,auxcedula)==0)
		{
			encontrado=1;
			cout<<"CEDULA: "<<endl;
			cin>>P->cedula;
			cout<<"Nombre : "<<endl;
			cin>>P->nombre;
			cout<<"Apellido :"<<endl;
			cin>>P->apellido;
			cout<<"Edad : "<<endl;
			cin>>P->edad;
			cout<<"nota1 (10%) equivalente a asistencia : "<<endl;
			cin>>P->n1;
			cout<<"nota2 (20%) Talleres en clase : "<<endl;
			cin>>P->n2;
			cout<<"nota3 (30%) Talleres trabajo extra clase: "<<endl;
			cin>>P->n3;
			cout<<"nota4 (40%) Evaluacion final: "<<endl;
			cin>>P->n4;
			P->nf=P->n1*0.1+P->n2*0.2+P->n3*0.3+P->n4*0.4;
		}
		P=P->sig;
	}
	if(encontrado==0)
	{
		cout<<"No se encontro esa cedula"<<endl;
		getch();
	}
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
		cout<<"<7>BUSCAR"<<endl;
		cout<<"<8>MODIFICAR"<<endl;
		cout<<"---------------------------"<<endl;
		cout<<"DIGITE LA OPCION QUE DESEA:"<<endl<<endl;
		cin>>op;
		switch(op)
		{
		case 1:crearInicio();break;
		case 2:crearFin();break;
		case 3:verInicio();break;
		case 4:verFin();break;
		case 5:anexarInicio();break;
		case 6:anexarFin();break;
		case 7:buscar();break;
		case 8:modificar();break;
		}
	}
}
