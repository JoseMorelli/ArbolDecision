/*
	Esta funcion recibe un conjunto de entrenamiento y la columna (o el atributo) sobre la cual calcular la ganancia. Devuelve la ganancia de ese atributo
*/
#include "ia.h"

double ganancia (int conjEntrenamiento[14][5], int columna){

	float resultadoAuxiliar1=0,resultadoAuxiliar=0,entrop,resultado=0,aux1=0,aux2=0,ocurrenciaDeAtributo=0;
	int i,j,k,posit,negat,index[5]={0,0,0,0,0},total=14,valorColumna=0,cantResultadoPositivo=0;

	posit=positivos(conjEntrenamiento,1);
	negat=positivos(conjEntrenamiento,2);
	total=posit+negat;
	entrop=entropia(posit,negat,total);			
	indice(conjEntrenamiento,index);			//Obtengo la cantidad de posibles valores de cada columna
	valorColumna=index[columna];				//Obtengo la cantidad de posibles valores de la columna pasada como argumento

	for(k=1;k<=valorColumna;k++){				// Por cada valor que tenga esta columna
		ocurrenciaDeAtributo=calculoOcurrencia(conjEntrenamiento,columna,k);
		for(i=1;i <=2;i++){
			for(j=0;j<14;j++){			//Obtengo los positivos de ese valor
				if(conjEntrenamiento[j][4]==i && conjEntrenamiento[j][columna]==k){
					cantResultadoPositivo++;
				}
			}
			if(cantResultadoPositivo !=0){
				aux1= (float)(cantResultadoPositivo/ocurrenciaDeAtributo);
				resultadoAuxiliar1=-(float)(aux1)*(log10(aux1)/log10(2));
				cantResultadoPositivo=0;
				aux1=0;
				aux1=(float) ocurrenciaDeAtributo/(float) total;
				aux2=aux1*resultadoAuxiliar1;
			} else
			{
				aux2=0;
			}
			resultadoAuxiliar=resultadoAuxiliar-aux2;
		}
	}
	resultado=entrop+resultadoAuxiliar;
	return resultado;
}
