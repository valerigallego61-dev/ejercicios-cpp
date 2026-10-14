#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
//Valeri Castillo Gallego

using namespace std;
//-----------------------------------------------------------
int x,y,n;
char Mtz[6][25];
struct pasajero
{
	char codigo[15];
	char nombreCompleto[50];
	char telefono[20];
	char correoElectronico[40];
	char origen[20];
	char destino[20];
	char fechaVuelo[20];
	char horaSalida[20];
	char horaLlegada[20];
	int numeroVuelo;
	int numeroSilla;
	float valorPasaje;
	int fila,colum;
	pasajero *sig;
};
struct pasajero *P, *cab, *fin;
char continuar='s';
// ---------------------------------------------------------------
void sillas()          
{
	cout<<"C=   ";
	for(x=0;x<25;x++)
	{if(x<9){cout<<" "<<x+1<<" ";}else{cout<<x+1<<" ";}}
	cout<<endl;
	for(x=0;x<6;x++)
	{
		cout<<"F"<<x+1<<"=  ";
		for(y=0;y<25;y++)
		{
			if(Mtz[x][y]=='X'){cout<<"[X]";}
			else{cout<<"[.]";}
		}
		cout<<endl;
		if(x==2){cout<<endl;}
	}
	cout<<endl<<"[.] Disponible   [X] Vendida"<<endl<<endl;
}

//---------------------------------------------------------------
void imprimirSilla()
{
	cout<<"F";
	if(P->fila<10){cout<<"0";}
	cout<<P->fila;
	cout<<"C";
	if(P->colum<10){cout<<"0";}
	cout<<P->colum;
}
//-----------------------------------------------------------------
void crearInicio()
{  
	system("cls");
	P=new pasajero;
	cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
	cout<<"Número de identificación del pasajero.: "<<endl;
	cin>>P->codigo;
	cout<<" "<<endl;
	cout<<"Nombres y apellidos del pasajero.: "<<endl;
	cin>>P->nombreCompleto;
	cout<<" "<<endl;
	cout<<"Número de contacto.: "<<endl;
	cin>>P->telefono;
	cout<<" "<<endl;
	cout<<" Dirección de correo del pasajero.: "<<endl;
	cin>>P->correoElectronico;
	cout<<" "<<endl;
	cout<<"Ciudad desde donde inicia el vuelo.: "<<endl;
	cin>>P->origen;
	cout<<" "<<endl;
	cout<<"Ciudad hacia donde se dirige el vuelo: "<<endl;
	cin>>P->destino;
	cout<<" "<<endl;
	cout<<"Fecha programada del viaje.: "<<endl;
	cin>>P->fechaVuelo;
	cout<<" "<<endl;
	cout<<"Hora programada de salida.: "<<endl;
	cin>>P->horaSalida;
	cout<<" "<<endl;
	cout<<"Código que identifica el vuelo: "<<endl;
	cin>>P->horaLlegada;
	cout<<" "<<endl;
	cout<<"Hora programada de llegada: "<<endl;
	cin>>P->numeroVuelo;
	cout<<" "<<endl;
	cout<<" ELIJA SU SILLA:"<<endl;
	cout<<" digite <s> para continuar:"<<endl;
	cin>>continuar;
	while(n==0)
	{
		system("cls");
		sillas();
		cout<<"Fila (1-6): ";cin>>P->fila;
		cout<<"Columna (1-25): ";cin>>P->colum;
		if(P->fila<1 || P->fila>6 || P->colum<1 || P->colum>25)
		{
			cout<<"Silla inexistente. Intente de nuevo."<<endl;
			getch();
		}
		else if(Mtz[P->fila-1][P->colum-1]=='X')
		{
			cout<<"Esa silla ya esta vendida. Elija otra."<<endl;
			getch();
		}
		else
		{
			Mtz[P->fila-1][P->colum-1]='X';
			n=1;
		}
	}
	cout<<"Precio pagado por el pasaje: "<<endl;
	cin>>P->valorPasaje;
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
//-------------------------------------------------------------
void crearFin()
{
	system("cls");
	P=new pasajero;
	cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
	cout<<"Número de identificación del pasajero.: "<<endl;
	cin>>P->codigo;
	cout<<" "<<endl;
	cout<<"Nombres y apellidos del pasajero.: "<<endl;
	cin>>P->nombreCompleto;
	cout<<" "<<endl;
	cout<<"Número de contacto.: "<<endl;
	cin>>P->telefono;
	cout<<" "<<endl;
	cout<<" Dirección de correo del pasajero.: "<<endl;
	cin>>P->correoElectronico;
	cout<<" "<<endl;
	cout<<"Ciudad desde donde inicia el vuelo.: "<<endl;
	cin>>P->origen;
	cout<<" "<<endl;
	cout<<"Ciudad hacia donde se dirige el vuelo: "<<endl;
	cin>>P->destino;
	cout<<" "<<endl;
	cout<<"Fecha programada del viaje.: "<<endl;
	cin>>P->fechaVuelo;
	cout<<" "<<endl;
	cout<<"Hora programada de salida.: "<<endl;
	cin>>P->horaSalida;
	cout<<" "<<endl;
	cout<<"Código que identifica el vuelo: "<<endl;
	cin>>P->horaLlegada;
	cout<<" "<<endl;
	cout<<"Hora programada de llegada: "<<endl;
	cin>>P->numeroVuelo;
	cout<<" "<<endl;
	cout<<" ELIJA SU SILLA:"<<endl;
	cout<<" digite <s> para continuar:"<<endl;
	cin>>continuar;
	n=0;
	while(n==0)
	{
		system("cls");
		sillas();
		cout<<"Fila (1-6): ";cin>>P->fila;
		cout<<"Columna (1-25): ";cin>>P->colum;
		if(P->fila<1 || P->fila>6 || P->colum<1 || P->colum>25)
		{
			cout<<"Silla inexistente. Intente de nuevo."<<endl;
			getch();
		}
		else if(Mtz[P->fila-1][P->colum-1]=='X')
		{
			cout<<"Esa silla ya esta vendida. Elija otra."<<endl;
			getch();
		}
		else
		{
			Mtz[P->fila-1][P->colum-1]='X';
			n=1;
		}
	}
	cout<<"Precio pagado por el pasaje: "<<endl;
	cin>>P->valorPasaje;
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
//-------------------------------------------------------------
void anexarInicio ()
{
	system("cls");
	P=new pasajero;
	cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
	cout<<"Número de identificación del pasajero.: "<<endl;
	cin>>P->codigo;
	cout<<" "<<endl;
	cout<<"Nombres y apellidos del pasajero.: "<<endl;
	cin>>P->nombreCompleto;
	cout<<" "<<endl;
	cout<<"Número de contacto.: "<<endl;
	cin>>P->telefono;
	cout<<" "<<endl;
	cout<<" Dirección de correo del pasajero.: "<<endl;
	cin>>P->correoElectronico;
	cout<<" "<<endl;
	cout<<"Ciudad desde donde inicia el vuelo.: "<<endl;
	cin>>P->origen;
	cout<<" "<<endl;
	cout<<"Ciudad hacia donde se dirige el vuelo: "<<endl;
	cin>>P->destino;
	cout<<" "<<endl;
	cout<<"Fecha programada del viaje.: "<<endl;
	cin>>P->fechaVuelo;
	cout<<" "<<endl;
	cout<<"Hora programada de salida.: "<<endl;
	cin>>P->horaSalida;
	cout<<" "<<endl;
	cout<<"Código que identifica el vuelo: "<<endl;
	cin>>P->horaLlegada;
	cout<<" "<<endl;
	cout<<"Hora programada de llegada: "<<endl;
	cin>>P->numeroVuelo;
	cout<<" "<<endl;
	cout<<" ELIJA SU SILLA:"<<endl;
	cout<<" digite <s> para continuar:"<<endl;
	cin>>continuar;
	n=0;
	while(n==0)
	{
		system("cls");
		sillas();
		cout<<"Fila (1-6): ";cin>>P->fila;
		cout<<"Columna (1-25): ";cin>>P->colum;
		if(P->fila<1 || P->fila>6 || P->colum<1 || P->colum>25)
		{
			cout<<"Silla inexistente. Intente de nuevo."<<endl;
			getch();
		}
		else if(Mtz[P->fila-1][P->colum-1]=='X')
		{
			cout<<"Esa silla ya esta vendida. Elija otra."<<endl;
			getch();
		}
		else
		{
			Mtz[P->fila-1][P->colum-1]='X';
			n=1;
		}
	}
	cout<<"Precio pagado por el pasaje: "<<endl;
	cin>>P->valorPasaje;
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
//------------------------------------------------------------------
void anexarFin ()
{
	system("cls");
	P=new pasajero;
	cout<<"----INGRESE LOS SIGUIENTES DATOS:---- "<<endl;
	cout<<"Número de identificación del pasajero.: "<<endl;
	cin>>P->codigo;
	cout<<" "<<endl;
	cout<<"Nombres y apellidos del pasajero.: "<<endl;
	cin>>P->nombreCompleto;
	cout<<" "<<endl;
	cout<<"Número de contacto.: "<<endl;
	cin>>P->telefono;
	cout<<" "<<endl;
	cout<<" Dirección de correo del pasajero.: "<<endl;
	cin>>P->correoElectronico;
	cout<<" "<<endl;
	cout<<"Ciudad desde donde inicia el vuelo.: "<<endl;
	cin>>P->origen;
	cout<<" "<<endl;
	cout<<"Ciudad hacia donde se dirige el vuelo: "<<endl;
	cin>>P->destino;
	cout<<" "<<endl;
	cout<<"Fecha programada del viaje.: "<<endl;
	cin>>P->fechaVuelo;
	cout<<" "<<endl;
	cout<<"Hora programada de salida.: "<<endl;
	cin>>P->horaSalida;
	cout<<" "<<endl;
	cout<<"Código que identifica el vuelo: "<<endl;
	cin>>P->horaLlegada;
	cout<<" "<<endl;
	cout<<"Hora programada de llegada: "<<endl;
	cin>>P->numeroVuelo;
	cout<<" "<<endl;
	cout<<" ELIJA SU SILLA:"<<endl;
	cout<<" digite <s> para continuar:"<<endl;
	cin>>continuar;
	n=0;
	while(n==0)
	{
		system("cls");
		sillas();
		cout<<"Fila (1-6): ";cin>>P->fila;
		cout<<"Columna (1-25): ";cin>>P->colum;
		if(P->fila<1 || P->fila>6 || P->colum<1 || P->colum>25)
		{
			cout<<"Silla inexistente. Intente de nuevo."<<endl;
			getch();
		}
		else if(Mtz[P->fila-1][P->colum-1]=='X')
		{
			cout<<"Esa silla ya esta vendida. Elija otra."<<endl;
			getch();
		}
		else
		{
			Mtz[P->fila-1][P->colum-1]='X';
			n=1;
		}
	}
	cout<<"Precio pagado por el pasaje: "<<endl;
	cin>>P->valorPasaje;
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
//-----------------------------------------------------
void verInicio()
{
	system("cls");
	P=cab;
	do
	{ 
		cout<<"-------------------------------"<<endl;
		cout<<"Número de identificación del pasajero: [ "<<P->codigo<<" ]"<<endl;
		cout<<"Nombres y apellidos del pasajero:      [ "<<P->nombreCompleto<<" ]"<<endl;
		cout<<"Número de contacto:                    [ "<<P->telefono<<" ]"<<endl;
		cout<<"Dirección de correo del pasajero:      [ "<<P->correoElectronico<<" ]"<<endl;
		cout<<"Ciudad desde donde inicia el vuelo:    [ "<<P->origen<<" ]"<<endl;
		cout<<"Ciudad hacia donde se dirige el vuelo: [ "<<P->destino<<" ]"<<endl;
		cout<<"Fecha programada del viaje:            [ "<<P->fechaVuelo<<" ]"<<endl;
		cout<<"Hora programada de salida:             [ "<<P->horaSalida<<" ]"<<endl;
		cout<<"Hora programada de llegada:            [ "<<P->horaLlegada<<" ]"<<endl;
		cout<<"Código que identifica el vuelo:        [ "<<P->numeroVuelo<<" ]"<<endl;
		cout<<"Código de identificación de la silla asignada: [";imprimirSilla();cout<<"]"<<endl;
		cout<<"Precio pagado por el pasaje:           [ "<<P->valorPasaje<<" ]"<<endl;
		cout<<"-------------------------------"<<endl;
		P=P->sig;
	} while(P!=cab);
	
	getch();
}
//---------------------------------------------------------

//------------------------------------------
int main ()
{
	int op=1;
	for(x=0;x<6;x++)
		for(y=0;y<25;y++)
		Mtz[x][y]='.';
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
		cout<<"<5>CONSULTAR INFORMACION DE LOS PASAJEROS "<<endl;
		cout<<"<6>CONSULTAR SILLAS VENDIDAS Y TOTAL DE RECAUDO "<<endl;
		cout<<"<7>BUSCAR POR NUMERO DE VUELO "<<endl;
		cout<<"<8>BUSCAR POR CEDULA "<<endl;
		cout<<"<9>VENTA DE SILLAS DE LOS VUELOS "<<endl;
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
//		case 6: buscar();break;
//		case 7: modificar();break;
//		case 8: estadistica();break;
		}
	}
}

