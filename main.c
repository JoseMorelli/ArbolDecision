#include "ia.h"

int main (){
	int resultado;

	int conjunto[14][5]={{1,1,1,1,1},{1,1,1,2,1},{2,1,1,1,2},{3,2,1,1,2},{3,3,2,1,2},{3,3,2,2,1},{2,3,2,2,2},{1,2,1,1,1},{1,3,2,1,2},{3,2,2,1,2},{1,2,2,2,2},{2,2,1,2,2},{2,1,2,1,2},{3,2,1,2,1}};

	printf("Ingrese valor predefinido: (entero)\n");
	scanf("%d",&resultado);
	printf("El resultado es: %d\n",arbolDecision(conjunto,resultado));	
	return 0;
}
