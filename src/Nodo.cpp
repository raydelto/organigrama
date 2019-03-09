/*
 * Nodo.cpp
 *
 *  Created on: Mar 9, 2019
 *      Author: raydelto
 */

#include "Nodo.h"

Nodo::~Nodo() {
	// TODO Auto-generated destructor stub
}

void Nodo::AgregarHijo(Nodo* hijo)
{
	hijo->SetProfundidad(_profundidad + 1);
	if(_primerHijo == NULL) //Si la lista está vacía
	{
		_primerHijo = hijo;
		_ultimoHijo = hijo;
	}else
	{
		_ultimoHijo->SetSiguienteHijo(hijo);
		_ultimoHijo = hijo;
	}
}
