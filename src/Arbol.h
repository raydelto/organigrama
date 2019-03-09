/*
 * Arbol.h
 *
 *  Created on: Mar 9, 2019
 *      Author: raydelto
 */

#ifndef ARBOL_H_
#define ARBOL_H_
#include "Nodo.h"

class Arbol
{
private:
	Nodo* _raiz;
public:
	void recorrer();
	void recorrer(Nodo* nodo);
	Arbol(Nodo* raiz);
	virtual ~Arbol();
};

#endif /* ARBOL_H_ */
