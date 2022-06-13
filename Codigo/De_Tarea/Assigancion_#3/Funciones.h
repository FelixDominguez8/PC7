#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Contacto.h"

using namespace std;

class Funciones
{
public:
	Funciones();
	void escribir_o_leer(fstream& fcont, bool Escribir);
	void leer_el_3(fstream& fcont, Contacto& cont);
	void escribir_el_3(fstream& fcont, Contacto& cont);
	void cambios(fstream& fcont);
};

