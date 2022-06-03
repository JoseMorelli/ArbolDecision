#include "ia.h"

void verContenido(Cola raiz)
{
	Cola nodo= raiz;
	int i=0;

	while(nodo){
		printf("Nodo %d\n",i);
		printf("nombreNodo: %d\n",nodo->nombreNodo);	
		printf("cantOpciones: %d\n",nodo->cantOpciones);	
		printf("resultado: %d\n",nodo->resultado);	
		printf("nombreRama: %d\n",nodo->nombreRama);	
		printf("valorDestino: %d\n",nodo->valorDestino);	
		nodo=nodo->hojaSig;
		i++;
		printf("----------------------------\n");
	}
}
