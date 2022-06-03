#include "ia.h"

void subConjunto(int conjunto[14][5], int subconjunto[14][5], int valor, int columna){

	int i,j,count=0;
//printf("Entro en subconjunto con valor: %d, columna: %d\n",valor,columna);
	for (i=0;i<14;i++){
		if(conjunto[i][columna]==valor){
			for(j=0;j<5;j++){
				subconjunto[count][j]=conjunto[i][j];
			}
				count++;

		}
	}
//	printf("El valor de count es: %d\n",count);
	for(i=count;i<14;i++){
//		printf("i: %d\n",i);
		for(j=0;j<5;j++){
			subconjunto[i][j]=0;
		}
	}
/*	for(i=0;i<count;i++){
		for(j=0;j<5;j++){
			printf("%d - ",subconjunto[i][j]);
		}
		printf("\n");
	}*/
}
