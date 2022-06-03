#include "ia.h"

void guardarContenido(Cola raiz)
{
	Cola nodo= raiz;
	int cant=0, archivo;
	char * buffer;

	if((archivo=open("arbolAprendido",O_RDWR|O_CREAT|O_APPEND,S_IRWXU))>0){
		buffer=(char *) malloc (sizeof (char *) *85);
		cant=sprintf(buffer,"nombreNodo: %d\ncantOpciones: %d\nresultado: %d\nnombreRama: %d\nvalorDestino: %d\n\n",nodo->nombreNodo,nodo->cantOpciones,nodo->resultado,nodo->nombreRama,nodo->valorDestino);	
		if(write(archivo, buffer, cant)<0){
			perror("No se puede escribir en el archivo - write()\n");
		}

	}
}
