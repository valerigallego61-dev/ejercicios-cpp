#include <iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>

using namespace std;
// declaracion de estructuras
struct Datos
	{ 
	char Cc[15];
	char Nom[15];
	char Ape1[15];
	struct Datos  *sig;
	};
// declaracion de variables globales
struct Datos *cab,*p;
char continuar= 's';// comilla sencilla por lo que es una sola letra

// funcion crear
void crear()
{system("cls");
	cout<<"Programa crear datos"<<endl<<endl;
	cab=NULL;
	while(continuar=='s')
	{p=new Datos;//
	  cout <<" ingrese los siguientes datos:"<<endl;
	  cout <<"  Cedula: ";cin>>p->Cc;
	  cout <<"  Nombre: ";cin>>p->Nom;
	  cout <<"Apellido: ";cin>>p->Ape1;
	  cout <<" desea continuar ingresando datos, digite <s> para continuar";
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
// funcion ver
void ver()
{system("cls");
    p=cab;
	cout<<" programa de visualizacion de datos"<<endl<<endl;
	while(p!=NULL)
	{
		cout<<"cedula: "<<p->Cc;
		cout<<", Nombre: "<<p->Nom;
		cout<<", Apellido: "<<p->Ape1;
		cout<<endl;
		p=p->sig;
	}
	getch();
}
// funcion anexar
void anexar()
{system("cls");
cout<<"Programa anexa datos"<<endl<<endl;
//cab=NULL;
continuar='s';
while(continuar=='s')
{p=new Datos;//
cout <<" ingrese los siguientes datos:"<<endl;
cout <<"  Cedula: ";cin>>p->Cc;
cout <<"  Nombre: ";cin>>p->Nom;
cout <<"Apellido: ";cin>>p->Ape1;
cout <<" desea continuar ingresando datos, digite <s> para continuar";
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
// estructura inicial
int main ()
{int op=1,control=1;
  while(op!=0)
  {
	  system("cls");
	  cout<<"-----Menu--Principal----"<<endl<<endl;
	  cout<<"<0>para salir"<<endl;
	  cout<<"<1>para crear"<<endl;
	  cout<<"<2>para ver"<<endl;
	  cout<<"<3>para anexar"<<endl;
	  cout<<"<4>para buscar"<<endl;
	  cout<<"<5>para modificar"<<endl;
	  cout<<"digita la opcion que deseas"<<endl;
	  cin>>op;
	  switch(op)
	  {
	  case 1:if (control==1)
	  {crear();control=2;}
	      else 
				{cout<<"debes usar anexar";getch();}
	  break;
	  case 2:ver();break;
	  case 3:anexar();break;
	  case 4:break;
	  case 5:break;
	  }
  }
}
// no puede ir nada
