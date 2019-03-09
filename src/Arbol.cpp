/*
 * Arbol.cpp
 *
 *  Created on: Mar 9, 2019
 *      Author: raydelto
 */

#include "Arbol.h"
#include <iostream>

void Arbol::recorrer()
{
	recorrer(_raiz);
}

void Arbol::recorrer(Nodo* nodo)
{
	for(int i = 0; i < nodo->GetProfundidad() ; i++)
	{
		std::cout << "\t";
	}
	std::cout << nodo->GetNombre() << std::endl;
	Nodo* i = nodo->GetPrimerHijo();
	while(i != NULL)
	{
		recorrer(i);
		i = i->GetSiguienteHijo();
	}
}

Arbol::Arbol(Nodo* raiz): _raiz(raiz)
{
}

Arbol::~Arbol() {
	// TODO Auto-generated destructor stub
}

