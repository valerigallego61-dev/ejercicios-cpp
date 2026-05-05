#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>
using namespace std;
int x,n,s,m;
char Cc[15][1000];// vector con 15 letras y 100 posiciones  
char Nom[20][1000], Ape1[20][1000], hora[6][1000], fecha[8] [1000];
int tipo[100],estado[100],manicurista[100] ;

//-----------------------------------------------------
//-----------------------------------------------------
//Programas crear 
void crear()
{cout<<"Programa para agendar en salon de estetica"<<endl<<endl;
cout<<"ingrese numero de citas";
cin>>n;
for(x=0;x<n;x++)
{
	cout<<"digite la siguiente informacion"<<endl;
	cout<<"cedula: ";cin>>Cc[x];
	cout<<"Nombre: ";cin>>Nom[x];
	cout<<"Apellido 1: ";cin>>Ape1[x];
	cout<<"fecha de la cita:(dd/mm/aa) ";cin>>fecha[x];
	cout<<"hora de la cita: (xx:xx) ";cin>>hora[x];
	cout<<"tipo de servicio: "<<endl<<"1.manicure basica"<<endl<<"2.Semipermanente"<<endl<<"3.Acrílicas"<<endl<<"4.Spa de manos"<<endl<<"5.Pedicure"<<endl;cin>>tipo[x];
	cout<<"Estado de la cita (1. Pendiente, 2. Atendida o 3. Cancelada)"<<endl;cin>>estado[x];
	cout<<"Número de la manicurista asignada (1 Adriana, 2 Laura o 3 Andrea)"<<endl;cin>>manicurista[x];
	int contador = 0;
	int valido = 1; // 1 = se puede, 0 = no se puede
	
	for(int i=0; i<x; i++) // revisa las citas ya guardadas
	{
		if(strcmp(fecha[i], fecha[x]) == 0 && strcmp(hora[i], hora[x]) == 0)
		{
			contador++;
			
			// misma manicurista en mismo horario
			if(manicurista[i] == manicurista[x])
			{
				valido = 0;
			}
		}
	}
	
	// si ya hay 3 citas
	if(contador >= 3)
	{
		valido = 0;
	}
	
	// SI NO ES VÁLIDO
	if(valido == 0)
	{
		cout<<"No hay disponibilidad en esa fecha y hora"<<endl;
		x--; // repetir
	}
}
}
//----------------------------------------------
void ver()
{system("cls");
cout<<"visualizar todas citas"<<endl<<endl;
for(x=0;x<n;x++)
{
	cout<<x<<" ";
	cout<<"cedula: "<<Cc[x];
	cout<<", Nombre: "<<Nom[x];
	cout<<", Apellido 1: "<<Ape1[x]<<endl;
	cout<<"fecha de la cita:(dd/mm/aa) "<<fecha[x]<<endl;
	cout<<"hora de la cita: (xx:xx) "<<hora[x]<<endl;
	cout<<"tipo de servicio: ";
	
	switch(tipo[x]){
	cout<<endl;
	case 1: cout<<"Manicure basica"; break;
	case 2: cout<<"Semipermanente"; break;
	case 3: cout<<"Acrilicas"; break;
	case 4: cout<<"Spa de manos"; break;
	case 5: cout<<"Pedicure"; break;
	default: cout<<"Opcion no valida";
	}
	cout<<"Estado de la cita: ";
	
	switch(estado[x]){
	cout<<endl;
	case 1: cout<<"Pendiente"; break;
	case 2: cout<<"Atendido"; break;
	case 3: cout<<"Cancelada"; break;
	default: cout<<"Desconocido";
	}
	cout<<"Manicurista: ";
	
	switch(manicurista[x]){
	cout<<endl;
	case 1: cout<<"Adriana"; break;
	case 2: cout<<"Laura"; break;
	case 3: cout<<"Andrea"; break;
	default: cout<<"No asignada";
	}
	cout<<endl;
}
getch();
}
//-----------------------------------------------------------------
void verPorManicurista()
{
	int m, encontrado = 0;
	
	cout<<"Ingrese numero de manicurista (1 Adriana, 2 Laura, 3 Andrea): ";
	cin>>m;
	
	cout<<"Citas de la manicurista:"<<endl;
	
	for(x=0; x<n; x++)
	{
		if(manicurista[x] == m)
		{
			encontrado = 1;
			
			cout<<"Cedula: "<<Cc[x]<<endl;
			cout<<"Nombre: "<<Nom[x]<<endl;
			cout<<"Apellido: "<<Ape1[x]<<endl;
			cout<<"Fecha: "<<fecha[x]<<endl;
			cout<<"Hora: "<<hora[x]<<endl;
			
			cout<<"Servicio: ";
			switch(tipo[x]){
			case 1: cout<<"Manicure basica"; break;
			case 2: cout<<"Semipermanente"; break;
			case 3: cout<<"Acrilicas"; break;
			case 4: cout<<"Spa de manos"; break;
			case 5: cout<<"Pedicure"; break;
			}
			cout<<endl;
			
			cout<<"Estado: ";
			switch(estado[x]){
			case 1: cout<<"Pendiente"; break;
			case 2: cout<<"Atendido"; break;
			case 3: cout<<"Cancelada"; break;
			}
			cout<<endl;
			
			cout<<"Manicurista: ";
			switch(manicurista[x]){
			case 1: cout<<"Adriana"; break;
			case 2: cout<<"Laura"; break;
			case 3: cout<<"Andrea"; break;
			}
			
			cout<<"----------------------";
		}
	}
	
	if(encontrado == 0)
	{
		cout<<"No hay citas para esa manicurista"<<endl;
	}
	
	getch();
}
//-----------------------------------------------------------------
void anexar()
{int aux;
cout<<"anexar citas"<<endl<<endl;
cout<<"cuantas citas desea anexar"<<endl;
cin>>aux;
n=n+aux;
for(x=(n-aux);x<n;x++)
	
{
	cout<<"digite la siguiente informacion"<<endl;
	cout<<"cedula: ";cin>>Cc[x];
	cout<<"Nombre: ";cin>>Nom[x];
	cout<<"Apellido 1: ";cin>>Ape1[x];
	cout<<"fecha de la cita:(dd/mm/aa) ";cin>>fecha[x];
	cout<<"hora de la cita: (xx:xx) ";cin>>hora[x];
	cout<<"tipo de servicio: "<<endl<<"1.manicure basica"<<endl<<"2.Semipermanente"<<endl<<"3.Acrílicas"<<endl<<"4.Spa de manos"<<endl<<"5.Pedicure"<<endl;cin>>tipo[x];
	cout<<"Estado de la cita (1. Pendiente, 2. Atendida o 3. Cancelada)"<<endl;cin>>estado[x];
	cout<<"Número de la manicurista asignada (1 Adriana, 2 Laura o 3 Andrea)"<<endl;cin>>manicurista[x];
	int contador = 0;
	int valido = 1; // 1 = se puede, 0 = no se puede
	
	for(int i=0; i<x; i++) // revisa las citas ya guardadas
	{
		if(strcmp(fecha[i], fecha[x]) == 0 && strcmp(hora[i], hora[x]) == 0)
		{
			contador++;
			
			// ? misma manicurista en mismo horario
			if(manicurista[i] == manicurista[x])
			{
				valido = 0;
			}
		}
	}
	
	// ? si ya hay 3 citas
	if(contador >= 3)
	{
		valido = 0;
	}
	
	// ?? SI NO ES VÁLIDO
	if(valido == 0)
	{
		cout<<"No hay disponibilidad en esa fecha y hora"<<endl;
		x--; // repetir
	}
	getch();
	cout<<endl;
}
}
//-----------------------------------------------------
void modificar()
	
{	int encontrado =0;
	char CcAux[15];
	system("cls");
	cout<<"Programa para buscar"<<endl<<endl;
	cout<<"Digite la Cedula Buscar";
	cin>>CcAux;
	for(x=0;x<n;x++)
	{	if(strcmp(Cc[x],CcAux)==0) // Compara cadenas 
	{ encontrado = 1;
	
	cout<<"se encontro la cita. INGRESE NUEVOS DATOS"<<endl;
	
	cout<<"Cedula: "; cin>>Cc[x];
	cout<<"Nombre: "; cin>>Nom[x];
	cout<<"Apellido: "; cin>>Ape1[x];
	cout<<"Fecha (dd/mm/aa): "; cin>>fecha[x];
	cout<<"Hora (xx:xx): "; cin>>hora[x];
	
	cout<<"Tipo de servicio:"<<endl;
	cout<<"1. Manicure basica"<<endl;
	cout<<"2. Semipermanente"<<endl;
	cout<<"3. Acrilicas"<<endl;
	cout<<"4. Spa de manos"<<endl;
	cout<<"5. Pedicure"<<endl;
	cin>>tipo[x];
	
	cout<<"Estado (1 Pendiente, 2 Atendido, 3 Cancelada): ";
	cin>>estado[x];
	
	cout<<"Manicurista (1 Adriana, 2 Laura, 3 Andrea): ";
	cin>>manicurista[x];
	
	cout<<"CITA MODIFICADA ";
	}
	}
	
	if(encontrado == 0)
	{
		cout<<"No se encontro ninguna cita con esa cedula"<<endl;
	}
	
	getch();
}
//-----------------------------------------------------------
void cancelar()
{
	char CcAux[1000];
	int encontrado = 0;
	
	system("cls");
	cout<<"Cancelar cita"<<endl<<endl;
	cout<<"Digite la cedula: ";
	cin>>CcAux;
	
	for(x=0; x<n; x++)
	{
		if(strcmp(Cc[x], CcAux) == 0)
		{
			encontrado = 1;
			
			cout<<"cita encontrada "<<endl;
			
			cout<<"Estado actual: ";
			switch(estado[x]){
			case 1: cout<<"Pendiente"; break;
			case 2: cout<<"Atendido"; break;
			case 3: cout<<"Cancelada"; break;
			}
			cout<<endl;
			
			cout<<"Nuevo estado:"<<endl;
			cout<<"1. Pendiente"<<endl;
			cout<<"2. Atendido"<<endl;
			cout<<"3. Cancelada"<<endl;
			cin>>estado[x];
			
			cout<<"estado actualizado";
		}
	}
	
	if(encontrado == 0)
	{
		cout<<"No se encontro ninguna cita con esa cedula"<<endl;
	}
	
	getch();
}
//------------------------------------------------------
void consultar()
{
	int m, encontrado = 0;
	char fech[1000], hor[1000];
	
	system("cls");
	cout<<"Consultar citas por manicurista, fecha y hora"<<endl<<endl;
	
	cout<<"Manicurista (1 Adriana, 2 Laura, 3 Andrea): ";
	cin>>m;
	
	cout<<"Fecha (dd/mm/aa): ";
	cin>>fech;
	
	cout<<"Hora (xx:xx): ";
	cin>>hor;
	
	for(x=0; x<n; x++)
	{
		if(manicurista[x] == m && strcmp(fecha[x], fech) == 0 && strcmp(hora[x], hor) == 0)
		{
			encontrado = 1;
			
			cout<<"\nCITA ENCONTRADA\n"<<endl;
			cout<<"Cedula: "<<Cc[x]<<endl;
			cout<<"Nombre: "<<Nom[x]<<endl;
			cout<<"Apellido: "<<Ape1[x]<<endl;
			cout<<"Fecha: "<<fecha[x]<<endl;
			cout<<"Hora: "<<hora[x]<<endl;
			
			cout<<"Servicio: ";
			switch(tipo[x]){
			case 1: cout<<"Manicure basica"; break;
			case 2: cout<<"Semipermanente"; break;
			case 3: cout<<"Acrilicas"; break;
			case 4: cout<<"Spa de manos"; break;
			case 5: cout<<"Pedicure"; break;
			}
			cout<<endl;
			
			cout<<"Estado: ";
			switch(estado[x]){
			case 1: cout<<"Pendiente"; break;
			case 2: cout<<"Atendido"; break;
			case 3: cout<<"Cancelada"; break;
			}
			cout<<endl;
			
			cout<<"Manicurista: ";
			switch(manicurista[x]){
			case 1: cout<<"Adriana"; break;
			case 2: cout<<"Laura"; break;
			case 3: cout<<"Andrea"; break;
			}
			
			cout<<"\n----------------------\n";
		}
	}
	
	if(encontrado == 0)
	{
		cout<<"No hay citas con esos datos"<<endl;
	}
	
	getch();
}
//--------------------------------------------------------
void contarTodos()
{
	int c1=0,c2=0,c3=0,c4=0,c5=0;
	
	for(x=0; x<n; x++)
	{
		switch(tipo[x]){
		case 1: c1++; break;
		case 2: c2++; break;
		case 3: c3++; break;
		case 4: c4++; break;
		case 5: c5++; break;
		}
	}
	
	cout<<"Manicure basica: "<<c1<<endl;
	cout<<"Semipermanente: "<<c2<<endl;
	cout<<"Acrilicas: "<<c3<<endl;
	cout<<"Spa de manos: "<<c4<<endl;
	cout<<"Pedicure: "<<c5<<endl;
	
	getch();
}
//----------------------------------------------------------
void buscar()
{
	char CcAux[1000];
	int encontrado = 0;
	
	system("cls");
	cout<<"Programa para buscar cita"<<endl<<endl;
	cout<<"Digite la cedula a buscar: ";
	cin>>CcAux;
	
	for(x=0; x<n; x++)
	{
		if(strcmp(Cc[x], CcAux) == 0)
		{
			encontrado = 1;
			
			cout<<"CITA ENCONTRADA"<<endl;
			cout<<"Cedula: "<<Cc[x]<<endl;
			cout<<"Nombre: "<<Nom[x]<<endl;
			cout<<"Apellido: "<<Ape1[x]<<endl;
			cout<<"Fecha: "<<fecha[x]<<endl;
			cout<<"Hora: "<<hora[x]<<endl;
			
			cout<<"Servicio: ";
			switch(tipo[x]){
			case 1: cout<<"Manicure basica"; break;
			case 2: cout<<"Semipermanente"; break;
			case 3: cout<<"Acrilicas"; break;
			case 4: cout<<"Spa de manos"; break;
			case 5: cout<<"Pedicure"; break;
			default: cout<<"No definido";
			}
			cout<<endl;
			
			cout<<"Estado: ";
			switch(estado[x]){
			case 1: cout<<"Pendiente"; break;
			case 2: cout<<"Atendido"; break;
			case 3: cout<<"Cancelada"; break;
			default: cout<<"No definido";
			}
			cout<<endl;
			
			cout<<"Manicurista: ";
			switch(manicurista[x]){
			case 1: cout<<"Adriana"; break;
			case 2: cout<<"Laura"; break;
			case 3: cout<<"Andrea"; break;
			default: cout<<"No asignada";
			}
			cout<<endl;
			
			cout<<"----------------------";
		}
	}
	
	if(encontrado == 0)
	{
		cout<<"No se encontro ninguna cita con esa cedula"<<endl;
	}
	
	getch();
}
//////////////////////////////////////////////////////////
int main()
{int op=1, control=1;
while(op!=10)
{system("cls");
cout<<"Menu Principal"<<endl<<endl;
cout<<"==================="<<endl;
cout<<"<1>Registrar  cita  "<<endl;
cout<<"<2>Registrar una nueva cita  "<<endl;
cout<<"<3>Visualizar todas las citas  "<<endl;
cout<<"<4>Visualizar cita por manicurista "<<endl;
cout<<"<5>Buscar cita por documento  "<<endl;
cout<<"<6>Modificar una cita (cambiar todos los valores)."<<endl;
cout<<"<7>Cancelar una cita (solo cambiar el valor de la cita (1. Pendiente, 2. Atendida o 3. Cancelada))"<<endl;
cout<<"<8>Consultar citas por manicurista (Buscar por fecha y Hora)"<<endl;
cout<<"<9>Contar cuantas personas se hicieron un mismos Tipo de Servicio. "<<endl;
cout<<"<10>salir"<<endl;
cin>>op;
switch(op)//para los subprogramas 
{
case 1: if(control==1)
{crear();control=0;}
else
{cout<<"Debe usar la opcion anexar"<<endl;}
break;
case 2: anexar(); break;  
case 3: ver(); break;
case 4: verPorManicurista(); break;
case 5: buscar(); break;
case 6: modificar(); break;
case 7: cancelar(); break;
case 8: consultar(); break;
case 9: contarTodos();break;
}
}
}
