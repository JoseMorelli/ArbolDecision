#include "ia.h"

void indice(int conjunto[14][5], int index[5]){
	
	int i,j;

	for (i=0;i<14;i++){
		for (j=0;j<5;j++){
			if(conjunto[i][j]>index[j] ){
				index[j]++;
			}
		
		}
	}
}
