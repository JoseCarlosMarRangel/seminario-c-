#include <iostream>
#include "TFecha.h"
using namespace std;

int main() {
	TFecha p;
		p.setDia(10);
		p.setMes(10);
		p.setAnyo(2007);
		cout << "Fecha obtenida: ";
		cout << p.getDia( ) << "-";
		cout << p.getMes( ) << "-";
		cout << p.getAnyo( ) << std::endl;;

}