#include <stdio.h>
#include "ia.h"

int nodo(int conjunto[14][5]){

	int i,raiz=0;
	double aux=-1,aux2=0;

	for(i=0;i<4;i++){				// Itero asi, xq es la cantidad de columnas que tengo que mirar
		aux2=ganancia(conjunto,i);
		if(aux<aux2){
			aux=aux2;			// Guardo en variable aux las columnas que tengan mayor ganancia
			raiz=i;				// raiz es la columna con mejor ganancia
		}
	}
	return raiz;
}
