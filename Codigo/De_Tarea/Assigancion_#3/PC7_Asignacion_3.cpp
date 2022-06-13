#include <iostream> // acceso_aleratorio.cpp
#include <fstream>
#include <cstdlib>
#include "Contacto.h"
#include "Funciones.h"
using namespace std;

int main() {
	fstream fcont0("contactos.dat", ios::out); fcont0.close();
	fstream fcont("contactos.dat", ios::in | ios::out | ios::binary);
	Funciones fun;
	fun.escribir_o_leer(fcont, true);
	cout << "ANTES:" << endl;
	fun.escribir_o_leer(fcont, false);
	cout << endl << "CAMBIOS:" << endl;
	fun.cambios(fcont);
	cout << endl << "DESPUES:" << endl;
	fun.escribir_o_leer(fcont, false);
	fcont.close();
}