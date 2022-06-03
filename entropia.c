#include "ia.h"

double entropia (double par, double impar, double conjunto) {

	double conjP,conjI;
	double resultado,aux1,aux2;


	conjP=(par/conjunto);
	conjI=(impar/conjunto);


	aux1=log10(conjP)/log10(2);
	aux2=log10(conjI)/log10(2);

	resultado= -(conjP*aux1)-(conjI*aux2);

	return resultado;
}
