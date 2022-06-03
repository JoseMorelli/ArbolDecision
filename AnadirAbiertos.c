#include "ia.h"

void AnadirAbiertos (ColaAbiertos* primero, ColaAbiertos *ultimo, int v)
{
   ColaAbiertos nuevo;
////	printf("%d\n",(**primero));
   /* Crear un nodo nuevo */
   nuevo = (ColaAbiertos)malloc(sizeof(abiertos));
   nuevo->valor = v;
   /* Este ser� el �ltimo nodo, no debe tener siguiente */
   nuevo->siguiente = NULL;
   /* Si la cola no estaba vac�a, a�adimos el nuevo a continuaci�n de ultimo */
   if(*ultimo) (*ultimo)->siguiente = nuevo;
//printf("Entre en anadir\n");
   /* Ahora, el �ltimo elemento de la cola es el nuevo nodo */
   *ultimo = nuevo;
   /* Si primero es NULL, la cola estaba vac�a, ahora primero apuntar� tambi�n al nuevo nodo */
   if(!*primero) *primero = nuevo;
}
