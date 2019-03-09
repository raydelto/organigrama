/*
 * Nodo.h
 *
 *  Created on: Mar 9, 2019
 *      Author: raydelto
 */

#ifndef NODO_H_
#define NODO_H_
#include <string>

class Nodo
{
public:
	Nodo(std::string nombre):_primerHijo(NULL), _ultimoHijo(NULL), _siguienteHijo(NULL), _profundidad(0){_nombre = nombre; }
	virtual ~Nodo();
	void SetNombre(std::string nombre) { _nombre = nombre ; }
	std::string GetNombre()  { return _nombre; }
	Nodo* GetPrimerHijo() { return _primerHijo; }
	void SetPrimerHijo(Nodo* primerHijo) { _primerHijo = primerHijo; }
	Nodo* GetUltimoHijo() { return _ultimoHijo; }
	void SetUltimoHijo(Nodo* hijo) { _ultimoHijo = hijo; }
	int GetProfundidad() { return _profundidad; }
	void SetProfundidad(int profundidad) { _profundidad = profundidad; }
	Nodo* GetSiguienteHijo()  { return _siguienteHijo; }
	void SetSiguienteHijo(Nodo* siguienteHijo) { _siguienteHijo = siguienteHijo; }
	void AgregarHijo(Nodo* hijo);


private:
	std::string _nombre;
	Nodo* _primerHijo;
	Nodo* _ultimoHijo;
	Nodo* _siguienteHijo;
	int _profundidad;
};

#endif /* NODO_H_ */
