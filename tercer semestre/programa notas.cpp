#include <iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>

using namespace std;

struct Datos
{
	char Cc[15];
	char Nom[15];
	char Ape1[15];
	char Asignatura[20];
	float Nota1;   // 10%
	float Nota2;   // 20%
	float Nota3;   // 30%
	float Nota4;   // 40%
	struct Datos  *sig;
};

struct Datos *cab, *p;
char continuar= 's';
//-----------------------------

// Nota final = Nota1*10% + Nota2*20% + Nota3*30% + Nota4*40%
float calcularNotaFinal(struct Datos *est)
{
	return (est->Nota1 * 0.10) + (est->Nota2 * 0.20) + (est->Nota3 * 0.30) + (est->Nota4 * 0.40);
}
//-----------------------------

	void crear()
	{
		system("cls");
		cout<<"Programa crear estudiantes"<<endl<<endl;
		cab=NULL;
		continuar='s';
		while(continuar=='s')
		{
			p=new Datos;
			cout <<" ingrese los siguientes datos:"<<endl;
			cout <<"     Cedula: ";cin>>p->Cc;
			cout <<"     Nombre: ";cin>>p->Nom;
			cout <<"   Apellido: ";cin>>p->Ape1;
			cout <<" Asignatura: ";cin>>p->Asignatura;
			cout <<"Nota 1 (10%): ";cin>>p->Nota1;
			cout <<"Nota 2 (20%): ";cin>>p->Nota2;
			cout <<"Nota 3 (30%): ";cin>>p->Nota3;
			cout <<"Nota 4 (40%): ";cin>>p->Nota4;
			cout <<" desea continuar ingresando datos, digite <s> para continuar: ";
			cin>> continuar;
			
			if(cab==NULL)
			{
				cab=p;
				p->sig=NULL;
			}
			else
			{
				p->sig=cab;
				cab=p;
			}
		}
	}
//----------------------------------------------------------
	void ver()
	{
		system("cls");
		p=cab;
		cout<<" Programa de visualizacion de estudiantes"<<endl<<endl;
		
		if(p==NULL)
		{
			cout<<"No hay estudiantes registrados todavia."<<endl;
			getch();
			return;
		}
		
		while(p!=NULL)
		{
			cout<<"Cedula: "<<p->Cc;
			cout<<", Nombre: "<<p->Nom;
			cout<<", Apellido: "<<p->Ape1;
			cout<<", Asignatura: "<<p->Asignatura;
			cout<<", Nota1: "<<p->Nota1;
			cout<<", Nota2: "<<p->Nota2;
			cout<<", Nota3: "<<p->Nota3;
			cout<<", Nota4: "<<p->Nota4;
			cout<<", Nota Final: "<<calcularNotaFinal(p);
			cout<<endl;
			p=p->sig;
		}
		getch();
	}
//-------------------------------------------
	void anexar()
	{
		system("cls");
		cout<<"Programa anexa estudiantes"<<endl<<endl;
		//cab=NULL;
		continuar='s';
		while(continuar=='s')
		{
			p=new Datos;
			cout <<" ingrese los siguientes datos:"<<endl;
			cout <<"     Cedula: ";cin>>p->Cc;
			cout <<"     Nombre: ";cin>>p->Nom;
			cout <<"   Apellido: ";cin>>p->Ape1;
			cout <<" Asignatura: ";cin>>p->Asignatura;
			cout <<"Nota 1 (10%): ";cin>>p->Nota1;
			cout <<"Nota 2 (20%): ";cin>>p->Nota2;
			cout <<"Nota 3 (30%): ";cin>>p->Nota3;
			cout <<"Nota 4 (40%): ";cin>>p->Nota4;
			cout <<" desea continuar ingresando datos, digite <s> para continuar: ";
			cin>> continuar;
			if(cab==NULL)
			{
				cab=p;
				p->sig=NULL;
			}
			else
			{
				p->sig=cab;
				cab=p;
			}
		}
	}
//-----------------------------------------------
	void buscar()
	{
		system("cls");
		char cedBuscada[15];
		int encontrado=0;
		
		cout<<"Programa consultar notas de un estudiante"<<endl<<endl;
		
		if(cab==NULL)
		{
			cout<<"No hay estudiantes registrados todavia."<<endl;
			getch();
			return;
		}
		
		cout<<"Ingrese la cedula del estudiante a consultar: ";
		cin>>cedBuscada;
		
		p=cab;
		while(p!=NULL)
		{
			if(strcmp(p->Cc,cedBuscada)==0)
			{
				encontrado=1;
				cout<<endl<<"----- Datos del estudiante -----"<<endl;
				cout<<"Cedula: "<<p->Cc<<endl;
				cout<<"Nombre: "<<p->Nom<<endl;
				cout<<"Apellido: "<<p->Ape1<<endl;
				cout<<"Asignatura: "<<p->Asignatura<<endl;
				cout<<"Nota 1 (10%): "<<p->Nota1<<endl;
				cout<<"Nota 2 (20%): "<<p->Nota2<<endl;
				cout<<"Nota 3 (30%): "<<p->Nota3<<endl;
				cout<<"Nota 4 (40%): "<<p->Nota4<<endl;
				cout<<"Nota Final: "<<calcularNotaFinal(p)<<endl;
				break;
			}
			p=p->sig;
		}
		
		if(encontrado==0)
		{
			cout<<"No se encontro ningun estudiante con la cedula "<<cedBuscada<<endl;
		}
		
		getch();
	}
//-----------------------------------------------
	
	int main ()
	{
		int op=1,control=1;
		while(op!=0)
		{
			system("cls");
			cout<<"-----Menu--Principal----"<<endl<<endl;
			cout<<"<0>para salir"<<endl;
			cout<<"<1>para crear estudiante"<<endl;
			cout<<"<2>para ver notas"<<endl;
			cout<<"<3>para anexar estudiante"<<endl;
			cout<<"<4>para ver todos los estudiantes"<<endl;
			cout<<"digita la opcion que deseas"<<endl;
			cin>>op;
			switch(op)
			{
			case 1:if (control==1)
			{crear();control=2;}
			else
			{cout<<"debes usar anexar";getch();}
			break;
			case 2:buscar();break;
			case 3:anexar();break;
			case 4:ver();break;
			}
		}
	}
