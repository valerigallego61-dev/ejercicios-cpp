#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

//Valeri Castillo Gallego

using namespace std;

// ---------------------------------------------------------------
// Estructura del nodo
// ---------------------------------------------------------------
struct Persona
{
	char documento[15];
	char nombre[15];
	char apellidoUno[15];
	char apellidoDos[15];
	int genero;          // 1 = masculino, 2 = femenino, 3 = otro
	int anios;
	int kilos;
	int centimetros;
	float indice;
	Persona *proximo;
};

Persona *primero = NULL;
Persona *ultimo  = NULL;

// ---------------------------------------------------------------
// Utilidades
// ---------------------------------------------------------------
void limpiarPantalla()
{
	system("cls");
}

void encabezado(const char *titulo)
{
	cout << "------------------------------" << endl;
	cout << titulo << endl;
	cout << "------------------------------" << endl << endl;
}

float calcularIndice(int kilos, int centimetros)
{
	float metros = centimetros / 100.0f;
	return kilos / (metros * metros);
}

const char *obtenerCategoria(float imc)
{
	if (imc < 18.5)       return "Bajo peso";
	else if (imc < 25.0)  return "Peso normal o saludable";
	else if (imc < 30.0)  return "Sobrepeso";
	else                  return "Obesidad";
}

const char *obtenerGenero(int g)
{
	if (g == 1) return "Masculino";
	if (g == 2) return "Femenino";
	return "Otro";
}

// ---------------------------------------------------------------
// Lectura y presentación de datos
// ---------------------------------------------------------------
void pedirDatos(Persona *x)
{
	cout << "Ingrese los siguientes datos" << endl;
	cout << "-------------------------------" << endl << endl;
	
	cout << "Numero de documento: ";
	cin >> x->documento;
	cout << "Nombre: ";
	cin >> x->nombre;
	cout << "Primer apellido: ";
	cin >> x->apellidoUno;
	cout << "Segundo apellido: ";
	cin >> x->apellidoDos;
	cout << "Genero (1.masculino, 2.femenino, 3.otro): ";
	cin >> x->genero;
	cout << "Edad: ";
	cin >> x->anios;
	cout << "Estatura en cm: ";
	cin >> x->centimetros;
	cout << "Peso en kg: ";
	cin >> x->kilos;
	cout << endl;
	
	x->indice = calcularIndice(x->kilos, x->centimetros);
}

void imprimirPersona(const Persona *x)
{
	cout << "----------------------------------------------" << endl;
	cout << "Documento:         [ " << x->documento   << " ]" << endl;
	cout << "Nombre:            [ " << x->nombre      << " ]" << endl;
	cout << "Primer apellido:   [ " << x->apellidoUno << " ]" << endl;
	cout << "Segundo apellido:  [ " << x->apellidoDos << " ]" << endl;
	cout << "Genero:            [ " << obtenerGenero(x->genero) << " ]" << endl;
	cout << "Edad:              [ " << x->anios       << " anios ]" << endl;
	cout << "Estatura:          [ " << x->centimetros << " cm ]" << endl;
	cout << "Peso:              [ " << x->kilos       << " kg ]" << endl;
	cout << "IMC:               [ " << x->indice      << " ]" << endl;
	cout << "Clasificacion:     " << obtenerCategoria(x->indice) << endl;
	cout << "----------------------------------------------" << endl;
}

// ---------------------------------------------------------------
// Inserción en la lista
// ---------------------------------------------------------------
void insertarAlPrincipio(Persona *nuevo)
{
	nuevo->proximo = primero;
	primero = nuevo;
	if (ultimo == NULL)
		ultimo = nuevo;
}

void insertarAlFinal(Persona *nuevo)
{
	nuevo->proximo = NULL;
	if (primero == NULL)
	{
		primero = nuevo;
		ultimo = nuevo;
	}
	else
	{
		ultimo->proximo = nuevo;
		ultimo = nuevo;
	}
}

// Ciclo común para las 4 opciones de registro.
// alPrincipio = true inserta al inicio, false al final.
void registrarPersonas(const char *titulo, bool alPrincipio)
{
	char seguir = 's';
	limpiarPantalla();
	encabezado(titulo);
	
	while (seguir == 's' || seguir == 'S')
	{
		Persona *nuevo = new Persona;
		pedirDatos(nuevo);
		
		if (alPrincipio) insertarAlPrincipio(nuevo);
		else             insertarAlFinal(nuevo);
		
		cout << "Presione <s> para registrar otra persona, otra tecla para volver: ";
		cin >> seguir;
		cout << endl;
	}
}

// ---------------------------------------------------------------
// Opciones del menú
// ---------------------------------------------------------------
void crearPorInicio() { registrarPersonas("CREAR LISTA POR EL INICIO", true);  }
void crearPorFinal()  { registrarPersonas("CREAR LISTA POR EL FINAL",  false); }
void anexarPorInicio(){ registrarPersonas("ANEXAR POR EL INICIO",      true);  }
void anexarPorFinal() { registrarPersonas("ANEXAR POR EL FINAL",       false); }

void mostrarLista()
{
	limpiarPantalla();
	
	if (primero == NULL)
	{
		cout << "\nNo hay personas registradas." << endl;
	}
	else
	{
		for (Persona *aux = primero; aux != NULL; aux = aux->proximo)
			imprimirPersona(aux);
	}
	getch();
}

Persona *localizar(const char *doc)
{
	Persona *aux = primero;
	while (aux != NULL && strcmp(aux->documento, doc) != 0)
		aux = aux->proximo;
	return aux;
}

void buscarPersona()
{
	limpiarPantalla();
	char doc[20];
	
	if (primero == NULL)
	{
		cout << "No hay personas registradas." << endl;
		getch();
		return;
	}
	
	cout << "Documento a buscar: ";
	cin >> doc;
	cout << endl;
	
	Persona *hallada = localizar(doc);
	if (hallada != NULL)
		imprimirPersona(hallada);
	else
		cout << "No existe ninguna persona con ese documento." << endl;
	
	getch();
}

void modificarPersona()
{
	limpiarPantalla();
	char doc[20];
	
	if (primero == NULL)
	{
		cout << "No hay personas registradas." << endl;
		getch();
		return;
	}
	
	cout << "Documento a modificar: ";
	cin >> doc;
	cout << endl;
	
	Persona *hallada = localizar(doc);
	if (hallada != NULL)
	{
		cout << "Ingrese los nuevos datos:" << endl << endl;
		pedirDatos(hallada);
		cout << "Registro actualizado." << endl;
	}
	else
	{
		cout << "No existe ninguna persona con ese documento." << endl;
	}
	
	getch();
}

void mostrarEstadisticas()
{
	limpiarPantalla();
	
	if (primero == NULL)
	{
		cout << "No hay personas registradas." << endl;
		getch();
		return;
	}
	
	int total = 0, hombres = 0, mujeres = 0;
	int conteo[4] = {0, 0, 0, 0};   // bajo, normal, sobrepeso, obesidad
	
	for (Persona *aux = primero; aux != NULL; aux = aux->proximo)
	{
		total++;
		if (aux->genero == 1) hombres++;
		else if (aux->genero == 2) mujeres++;
		
		if (aux->indice < 18.5)       conteo[0]++;
		else if (aux->indice < 25.0)  conteo[1]++;
		else if (aux->indice < 30.0)  conteo[2]++;
		else                          conteo[3]++;
	}
	
	const char *etiquetas[4] = {
		"Bajo peso", "Peso normal o saludable", "Sobrepeso", "Obesidad"
	};
	
	cout << "----------------------------------------------" << endl;
	cout << "ESTADISTICAS" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "Total de personas:  [ " << total   << " ]" << endl;
	cout << "Hombres:            [ " << hombres << " ]" << endl;
	cout << "Mujeres:            [ " << mujeres << " ]" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "DISTRIBUCION POR IMC" << endl;
	cout << "----------------------------------------------" << endl;
	
	for (int i = 0; i < 4; i++)
	{
		float porcentaje = (conteo[i] * 100.0f) / total;
		cout << etiquetas[i] << ": " << conteo[i]
			<< "  [ " << porcentaje << "% ]" << endl;
	}
	cout << "----------------------------------------------" << endl;
	
	getch();
}

// ---------------------------------------------------------------
// Programa principal
// ---------------------------------------------------------------
int main()
{
	bool listaCreadaInicio = false;
	bool listaCreadaFinal  = false;
	int opcion = 1;
	
	while (opcion != 0)
	{
		limpiarPantalla();
		cout << "----------------------------------------" << endl;
		cout << "          MENU PRINCIPAL" << endl;
		cout << "----------------------------------------" << endl;
		cout << "<0> SALIR" << endl;
		cout << "<1> CREAR POR INICIO" << endl;
		cout << "<2> CREAR POR FINAL" << endl;
		cout << "<3> ANEXAR POR INICIO" << endl;
		cout << "<4> ANEXAR POR FINAL" << endl;
		cout << "<5> VER LISTA" << endl;
		cout << "<6> BUSCAR" << endl;
		cout << "<7> MODIFICAR" << endl;
		cout << "<8> ESTADISTICAS" << endl;
		cout << "----------------------------------------" << endl;
		cout << "Elija una opcion: ";
		cin >> opcion;
		
		switch (opcion)
		{
		case 1:
			if (!listaCreadaInicio) { crearPorInicio(); listaCreadaInicio = true; }
			else { cout << "La lista ya fue creada por inicio." << endl; getch(); }
			break;
		case 2:
			if (!listaCreadaFinal) { crearPorFinal(); listaCreadaFinal = true; }
			else { cout << "La lista ya fue creada por final." << endl; getch(); }
			break;
		case 3: anexarPorInicio();    break;
		case 4: anexarPorFinal();     break;
		case 5: mostrarLista();       break;
		case 6: buscarPersona();      break;
		case 7: modificarPersona();   break;
		case 8: mostrarEstadisticas();break;
		}
	}
	
	return 0;
}
