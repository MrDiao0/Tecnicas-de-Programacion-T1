#include <iostream>
using namespace std;
#include "algoritmos.h"

void probarPotencia ();
void ProbarBusquedaE();
int main () {
	int opcion = -1;
	while (opcion != 0) {
		cout << endl << "Seleccione 0:Salir, 1:Potencia, 2:Busqueda. Cual opcion: ";
		cin >> opcion;
		switch (opcion) {
			case 0: return 0;
			case 1: probarPotencia (); break;
			case 2: ProbarBusquedaE(); break;
		}
	}
	return 0;
}

void probarPotencia () {
	int base, exponente, resultado;
	cout << "Ingrese base: ";
	cin >> base;
	cout << "Ingrese exponente: ";
	cin >> exponente;
	resultado = potencia (base, exponente);
	cout << "El resultado fue: " << resultado << endl;
}

void ProbarBusquedaE(){
	int a[]={0,2,6,1,7,8,5,3}, n=8, k=0;
	cout<< "Ingrese numero que desea buscar: ";
	cin>> k;
	cout<<"Se encuentra en la posicion: "<<BusquedaE(a,n,k)+1;
}