#include <iostream>
#include <iostream>
 #include <conio.h>
#include <stdio.h>
#include <string.h>
	
using namespace std;

struct listas
	{
	char Cc[15];
	char Nombre[30];
	float NF;
	struct listas *sig;
};

  struct listas  *P, *cab, *fin;
//---------------------------------------------------
void crear()
   {
	   system("cls");
	   P=new listas;
	   cout<<"--------ingrese los siguientes datos: "<<endl;
	   cout<<"CEDULA: "<<endl;
	   cin>>P->Cc;
	   cout<<" "<<endl;
	   cout<<"NOMBRE: "<<endl;
	   cin>>P->Nombre;
	   cout<<" "<<endl;
	   cout<<"Nota Final: "<<endl;
	   cin>>P->NF;
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
		 fin->sig=P;
	 }
	getch();
	
   }  
   //--------------------------------
   void ver()
   {
	   system("cls");
	   P=cab;
	   do
	   {
		   cout<<"-------------------------------"<<endl;
		   cout<<"cedula: [ "<<P->Cc<<" ]"<<endl;
		   cout<<"nombre: [ "<<P->Nombre<<" ]"<<endl;
		   cout<<"nota final: [ "<<P->NF<<" ]"<<endl;
		   cout<<"-------------------------------"<<endl;
		   P=P->sig;
	   } while(P!=cab);
	   
	   getch();
   }
//------------------------------------------------
void anexar()
{
	system("cls");
	P=new listas;
	cout<<"--------ingrese los siguientes datos: "<<endl;
	cout<<"CEDULA: "<<endl;
	cin>>P->Cc;
	cout<<" "<<endl;
	cout<<"NOMBRE: "<<endl;
	cin>>P->Nombre;
	cout<<" "<<endl;
	cout<<"Nota Final: "<<endl;
	cin>>P->NF;
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
		fin->sig=P;
	}
	getch();
	
}  
	
//--------------------------------------------------
void buscar()
{
	system("cls");
	char auxCc[20];
	int x;
	int encontrado;
	
	cout<<"-----------------------------"<<endl;
	cout<<"digite la cedula a buscar: ";cin>>auxCc;
	cout<<" "<<endl;
	P=cab;
	do
	{   if(strcmp(P->Cc,auxCc)==0)
	   {
		cout<<"-------------------------------"<<endl;
		cout<<"cedula: [ "<<P->Cc<<" ]"<<endl;
		cout<<"nombre: [ "<<P->Nombre<<" ]"<<endl;
		cout<<"nota final: [ "<<P->NF<<" ]"<<endl;
		cout<<"-------------------------------"<<endl;
	   }
		P=P->sig;
	} while(P!=cab);
	
	getch();
	
}
//--------------------------------------------------
void modificar()
{
	system("cls");
	char auxCc[20];
	cout<<"-----------------------------"<<endl;
	cout<<"digite la cedula a modificar: ";cin>>auxCc;
	cout<<" "<<endl;
	P=cab;
	do
	{
		if(strcmp(P->Cc,auxCc)==0)
		{
			cout<<"ingrese la cedula"<<endl;
			cin>>P->Cc;
			cout<<" "<<endl;
			cout<<"ingrese un nombre"<<endl;
			cin>>P->Nombre;
			cout<<" "<<endl;
			cout<<"ingrese su nota final"<<endl;
			cin>>P->NF;
			
		}
		P=P->sig;
	} while(P!=cab);
	
	
	getch();
}
//--------------------------------------------------
int main()
   {
	   int op=1;
	   while(op!=0)
	   {
		   system("cls");
		   cout<<"-----MENU PRINCIPAL------"<<endl<<endl;
		   cout<<"---------------------------"<<endl;
		   cout<<"<0>Para salir"<<endl;
		   cout<<"<1>Para crear"<<endl;
		   cout<<"<2>Para ver"<<endl;
		   cout<<"<3>Para anexar"<<endl;
		   cout<<"<4>Para buscar "<<endl;
		   cout<<"<5>Para modificar"<<endl;
		   cout<<"---------------------------"<<endl;
		   cout<<"DIGITE LA OPCION QUE DESEA:"<<endl<<endl;
		   cin>>op;
		   switch(op)
		   {
		   case 1:crear();break;
		   case 2:ver();break;
		   case 3:anexar();break;
		   case 4:buscar();break;
		   case 5:modificar();break;
		   }
	   }
   }
