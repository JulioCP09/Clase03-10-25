// Practica clase 03-10-25.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "ListaEnlazada.h"
using namespace std;

int main()
{
    ListaEnlazada lista;
   /* lista.Insertar(20);
    lista.Insertar(10);
    lista.Insertar(8);
    lista.Insertar(7);
    lista.Insertar(30);*/

    

	int numeroLista = 0;
	int numeroBuscar = 0;
    bool continuar = true;
    string respuesta = "si";

    while (continuar) 
    {
		cout << "Ingrese un numero para la lista: " << endl;
		cin >> numeroLista;
		lista.Insertar(numeroLista);

        cout << "Desea continuar? Si/No" << endl;
        cin >> respuesta;

        if (respuesta == "No" || respuesta == "no")
        {
            continuar = false;
        }
        else 
        {
			continuar = true;
        }

    }
    lista.Mostrar();

	cout << "Ingrese un numero a buscar en la lista: " << endl;
	cin >> numeroBuscar;
	lista.Buscar(numeroBuscar);
}
