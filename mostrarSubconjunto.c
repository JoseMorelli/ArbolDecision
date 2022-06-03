#include "ia.h"

void mostrarSubconjunto(int subconjunto[14][5]){

	int k,j;

	for(k=0;k<14;k++){
		for(j=0;j<5;j++){
			if(subconjunto[k][j] == 0){
				k=14,j=5;
			}else{
				printf("%d - ",subconjunto[k][j]);
			}
		}
		printf("\n");
	}
}
