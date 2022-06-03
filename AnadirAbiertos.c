#include "ia.h"

void AnadirAbiertos (ColaAbiertos* primero, ColaAbiertos *ultimo, int v)
{
   ColaAbiertos nuevo;
////	printf("%d\n",(**primero));
   /* Crear un nodo nuevo */
   nuevo = (ColaAbiertos)malloc(sizeof(abiertos));
   nuevo->valor = v;
   /* Este será el último nodo, no debe tener siguiente */
   nuevo->siguiente = NULL;
   /* Si la cola no estaba vacía, añadimos el nuevo a continuación de ultimo */
   if(*ultimo) (*ultimo)->siguiente = nuevo;
//printf("Entre en anadir\n");
   /* Ahora, el último elemento de la cola es el nuevo nodo */
   *ultimo = nuevo;
   /* Si primero es NULL, la cola estaba vacía, ahora primero apuntará también al nuevo nodo */
   if(!*primero) *primero = nuevo;
}
