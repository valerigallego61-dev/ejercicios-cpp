#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>


using namespace std;
int M1[100] [100] ,M2 [100] [100], M3 [100] [100];
int x,y,n1,n2,n3,s;
//---------------------------------------------------

void crearM1()
{system ("cls");

cout <<" crear matriz "<<endl;
cout<<"-------------------"<<endl<<endl;
cout<< "cual es el tamaña de la matriz ";cin>>n1;
for (x=0;x<n1;x++)
{   
	for(y=0;y<n1;y++)
	{ 
		cout<<"digite un valor para la posicion ["<<x<<y<<"]:";cin>>M1[x][y];
		
	}
}
}
//----------------------------------------------------------------------
void crearM2()
{system ("cls");

cout <<" crear matriz "<<endl;
cout<<"-------------------"<<endl<<endl;
cout<< "cual es el tamaña de la matriz ";cin>>n2;
for (x=0;x<n2;x++)
{   
	for(y=0;y<n2;y++)
	{ 
		cout<<"digite un valor para la posicion ["<<x<<y<<"]:";cin>>M2[x][y];
		
	}
}
}
//--------------------------------------------------------------------
void crearM3()
{system ("cls");

cout <<" crear matriz "<<endl;
cout<<"-------------------"<<endl<<endl;
cout<< "cual es el tamaña de la matriz ";cin>>n3;
for (x=0;x<n3;x++)
{   
	for(y=0;y<n3;y++)
	{ 
		cout<<"digite un valor para la posicion ["<<x<<y<<"]:";cin>>M3[x][y];
		
	}
}
}
//---------------------------------------------------------------------
void vertodos()
{
	cout <<" ver todas las matrices "<<endl;
	cout<<"----------------------------"<<endl<<endl;
	//   ver matriz 1
	cout<<endl<<"  matriz No1-    "<<endl;
	for(x=0;x<n1;x++)
	{
		for(y=0;y<n1;y++)
		{
			cout<<" : "<<M1[x] [y];
		}
		cout<<" : "<<endl;
	}
	//   ver matriz 2
	cout<<endl<<"  matriz No2-    "<<endl;
	for(x=0;x<n2;x++)
	{
		for(y=0;y<n2;y++)
		{
			cout<<" : "<<M2[x] [y];
		}
		cout<<" : "<<endl;
	}
	//   ver matriz 3
	cout<<endl<<"  matriz No3-    "<<endl;
	for(x=0;x<n3;x++)
	{
		for(y=0;y<n3;y++)
		{
			cout<<" : "<<M3[x] [y];
		}
		cout<<" : "<<endl;
	}
	
	getch();
}
//----------------------------------------------------------
void proceso()
{
	cout <<"suma de matrices..m1+m2=m3 "<<endl;
	cout<<"----------------------------"<<endl<<endl;
	for(x=0;x<n3;x++)
	{
		for(y=0;y<n3;y++)
		{
			M3[x] [y]= M1[x] [y]+M2[x] [y];
		}
		
	}
	vertodos();
}
//--------------------------------------------------------------------------
void invertida()
{  int sumaFila=0,sumatotal=0; 
	system("cls");
	cout <<"Matriz Transpuesta=COLUMNAS"<<endl;
	cout<<"----------------------------"<<endl<<endl;
	for(x=0;x<n1;x++)
	{
		for(y=0;y<n1;y++)
		{
			cout<<"|"<<M1[y] [x];//invierto las posiciones
			sumaFila=sumaFila+M1[y] [x];
			sumatotal=sumatotal+M1[y] [x];
		}
		
		cout<<"|"<<"="<<sumaFila<<endl;
		sumaFila=0;
	}
	cout<<endl<<"La suma total de la matriz  "<<sumatotal;
	getch();
}
//---------------------------------------------------------------------
void sumafilas()
{  int sumaFila=0,sumatotal=0; 
system("cls");
cout <<"suma filas "<<endl<<endl;
for(x=0;x<n1;x++)
{
	for(y=0;y<n1;y++)
	{
		cout<<"|"<<M1[x] [y];//invierto las posiciones
		sumaFila=sumaFila+M1[x] [y];
		sumatotal=sumatotal+M1[x] [y];
	}
	
	cout<<"|"<<"="<<sumaFila<<endl;
	sumaFila=0;
}
cout<<endl<<"La suma total de la matriz  "<<sumatotal;
getch();
}
//--------------------------------------------------------------
void sumadiagonales() 
{int s1=0,s2=0; 
system("cls");
cout <<"suma diagonales"<<endl<<endl;
for(x=0;x<n1;x++)
{
	for(y=0;y<n1;y++)
	{
		cout<<"|"<<M1[x] [y];  
		if(x==y )
		{s1=s1+M1[x] [y];
		}
		if (x+y==n1-1)
		{s2=s2+M1[x] [y];
		}
	}
	
	cout<<"|"<<endl;
    cout<<" suma de la diagonal 1: "<<s1<<endl;
	cout<<" suma de la diagonal 2: "<<s2<<endl;
}
getch();
	
}
//---------------------------------------------------------------------
int main ()
{ int op=1;
while (op!=0)
{   system ("cls");
cout<<"Menu principal "<<endl;
cout<<"------------------ "<<endl<<endl;
cout<<"<0>.......para salir  "<<endl;
cout<<"<1>.......para crear matriz 1   "<<endl;
cout<<"<2>.......para crear matriz 2   "<<endl;
cout<<"<3>.......para crear matriz 3   "<<endl;
cout<<"<4>.......ver todas las matrices "<<endl;
cout<<"<5>.......procesos con matrices   "<<endl;
cout<<"<6>.......invertir matrices (suma columnas)   "<<endl;
cout<<"<7>.......suma de filas    "<<endl;
cout<<"<8>.......suma de diagonales "<<endl;
cout<<"<9>........................."<<endl;

cout<<"--------------------------------- "<<endl<<endl;
cout<<"digite la opcion que desea .:  ";cin>>op;
switch(op)
{
case 1: crearM1 (); break;
case 2:  crearM2();break;
case 3: crearM3();break;
case 4: vertodos();break;
case 5:  proceso();break;
case 6:  invertida();break;
case 7:  sumafilas();break;
case 8: sumadiagonales();break;
case 9:  ;break;

}
}
}
