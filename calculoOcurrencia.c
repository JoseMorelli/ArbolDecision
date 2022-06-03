#include "ia.h"

int calculoOcurrencia(int conjEntrenamiento[14][5], int columna, int valor){

	int i,aux=0;

	for (i=0;i<14;i++){
		if (conjEntrenamiento[i][columna]== valor){
			aux++;
		}
	}
	return aux;
}
