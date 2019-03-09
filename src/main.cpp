//============================================================================
// Name        : Arboles.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Arbol.h"
using namespace std;


/*
 *               Presidente
 *          /               \
 *      VP Finanzas     VP Operaciones
 *                            /
 *                        Director de Tecnologia
 *                          /	            \
 *                        Gerente 1        Gerentes 2
 *                        					 /               \
 *                        					Supervisor 1     Supervisor 2
 * 																 /   \
 *															Operario 1	Operario 2
*/


int main()
{
	Nodo* presidente = new Nodo("Presidente");
	Nodo* vp1 = new Nodo("VP Finanzas");
	Nodo* vp2 = new Nodo("VP Operaciones");
	Nodo* director = new Nodo("Director de Tecnología");
	Nodo* gerente1 = new Nodo("Gerente 1");
	Nodo* gerente2 = new Nodo("Gerente 2");
	Nodo* supervisor1 = new Nodo("Supervisor 1");
	Nodo* supervisor2 = new Nodo("Supervisor 2");
	Nodo* operario1 = new Nodo("Operario 1");
	Nodo* operario2 = new Nodo("Operario 2");
	presidente->AgregarHijo(vp1);
	presidente->AgregarHijo(vp2);
	vp2->AgregarHijo(director);
	director->AgregarHijo(gerente1);
	director->AgregarHijo(gerente2);
	gerente2->AgregarHijo(supervisor1);
	gerente2->AgregarHijo(supervisor2);
	supervisor2->AgregarHijo(operario1);
	supervisor2->AgregarHijo(operario2);

	Arbol* organigrama = new Arbol(presidente);
	organigrama->recorrer();
	return 0;
}
