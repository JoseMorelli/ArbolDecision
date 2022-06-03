#include "ia.h"

int Leer(Cola *primero, Cola *ultimo)
{
   Cola nodo; /* variable auxiliar para manipular nodo */
   int v;      /* variable auxiliar para retorno */
   
   /* Nodo apunta al primer elemento de la pila */
   nodo = *primero;
   if(!nodo) return 0; /* Si no hay nodos en la pila retornamos 0 */
   /* Asignamos a primero la dirección del segundo nodo */
   *primero = nodo->hojaSig;
   /* Guardamos el valor de retorno */
   v = nodo->nombreNodo; 
   /* Borrar el nodo */
   free(nodo);
   /* Si la cola quedó vacía, ultimo debe ser NULL también*/
   if(!*primero) *ultimo = NULL;
   return v;
}
