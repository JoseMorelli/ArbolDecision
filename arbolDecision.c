#include "ia.h"

int  arbolDecision(int conjunto[14][5], int valorPredefinido){
	int i,count, mejor=0,index[5]={0,0,0,0,0},valor,valorColumna=0,subconjunto[14][5],raiz=0,resultado,mejorResultado=0;
	Cola primero=NULL, ultimo=NULL;
	ColaAbiertos primeroAbiertos=NULL,ultimoAbiertos=NULL;

	if (conjunto == NULL){
		printf("Error, no hay conjunto\n");
		return valorPredefinido;
	}
	for (i=0;i<=12;i++){
		if (conjunto[i][4]!=conjunto[i+1][4]){
			i=12;
		}
		else{
			count++;		
		}
	}
	if (count == 13){
		valor=conjunto[0][4];
		printf("Valor devuelto: %d\nSALGO....",valor);	
		return valor;
	}
	indice(conjunto,index);					// Obtengo la cantidad de opciones de cada columna
	raiz=nodo(conjunto);
	valorColumna=index[mejor];
	do{
		if(raiz==0){	
			mejor=LeerAbiertos(&primeroAbiertos,&ultimoAbiertos);
			//	printf("..................Leo de colaAbiertos el valor: %d\n",mejor);
		}else{
			mejor=raiz;
			raiz=0;
		}
		valorColumna=index[mejor];			// Obtengo la cantidad de opciones de la columna pasada como argumento
		//	printf("El atributo raiz es: %d \n",mejor);
		//	printf("La cantidad de valores posibles para %d es: %d\n",mejor,valorColumna);
		Anadir(&primero,&ultimo,mejor,valorColumna,0,0,0);
		guardarContenido(ultimo);
		for(i=1;i<=valorColumna;i++){
			//	printf("Examino cada valor posible de %d..\n",mejor);
			subConjunto(conjunto,subconjunto,i,mejor);
			//	printf("El subconjunto generado es: \n");
			//	mostrarSubconjunto(subconjunto);
			mejorResultado=nodo(subconjunto);
			//	printf("El mejorResultado nodo de este subconjunto es: %d\n",mejorResultado);
			if(mejorResultado == 0)
			{
				resultado=subconjunto[0][4];
			}else {
				resultado=0;
				//	printf("Guardo en colaAbiertos el valor: %d\n",mejorResultado);
				AnadirAbiertos( &primeroAbiertos,&ultimoAbiertos,mejorResultado);
			}
			Anadir(&primero,&ultimo,mejor,0,resultado,i,mejorResultado);
			//printf("Guardo en colaAbiertos el valor: %d\n",mejorResultado);
			//AnadirAbiertos( &primeroAbiertos,&ultimoAbiertos,mejorResultado);
			guardarContenido(ultimo);
		}
	} while (primeroAbiertos);
	return 0;
}
