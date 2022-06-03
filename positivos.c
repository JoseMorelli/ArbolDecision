#include "ia.h"

int positivos (int conjunto[14][5],int positivo){

	int cantidad=0,i;
	for (i=0;i<=13;i++){
		if(conjunto[i][4]==positivo){
			cantidad++;
		}
	}
	return cantidad;
}
