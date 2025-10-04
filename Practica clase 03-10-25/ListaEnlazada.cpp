#include "ListaEnlazada.h"
#include <iostream>
using namespace std;

ListaEnlazada::ListaEnlazada()
{
	cabeza = nullptr;
}

void ListaEnlazada::Insertar(int valor)
{
	Nodo* nuevo = new Nodo(valor);
	nuevo->siguiente = cabeza;
	cabeza = nuevo;

}

void ListaEnlazada::Mostrar() 
{

	Nodo* actual = cabeza;
	while (actual != nullptr)
	{
		cout << actual->dato << endl;
		actual = actual->siguiente;
	}
	cout << "FINAL DE LA LISTA" << endl;
}

void ListaEnlazada::Buscar(int valor)
{
	Nodo* actual = cabeza;
	bool encontrado = false;
	int posicion = 0;
	while (actual != nullptr)
	{
		posicion++;
		if (actual->dato == valor)
		{
			encontrado = true;
			break;
		}
		actual = actual->siguiente;
	}
	if (encontrado)
	{
		cout << "El valor " << valor << " fue encontrado en la posicion: " << posicion << endl;
	}
	else
	{
		cout << "El valor " << valor << " no fue encontrado en la lista." << endl;
	}
}



