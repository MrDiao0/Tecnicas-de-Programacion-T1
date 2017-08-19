#include <math.h>

int potencia (int base, int exponente) {
	int resultado;
	resultado = pow (base, exponente);
	return resultado;
}

int BusquedaE(int a[], int n, int k){
	int i = 0;
	while(i<n){
		if(a[i] == k){
			return i;
		}
	i++;
	}
	return -1;
}