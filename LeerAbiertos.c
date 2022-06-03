#include "ia.h"

int LeerAbiertos(ColaAbiertos *primero, ColaAbiertos *ultimo)
{
   ColaAbiertos nodo; /* variable auxiliar para manipular nodo */
   int v;      /* variable auxiliar para retorno */
   
   /* Nodo apunta al primer elemento de la pila */
   nodo = *primero;
   if(!nodo) return 0; /* Si no hay nodos en la pila retornamos 0 */
   /* Asignamos a primero la direcci�n del segundo nodo */
   *primero = nodo->siguiente;
   /* Guardamos el valor de retorno */
   v = nodo->valor; 
   /* Borrar el nodo */
   free(nodo);
   /* Si la cola qued� vac�a, ultimo debe ser NULL tambi�n*/
   if(!*primero) *ultimo = NULL;//, printf("ME VACIE\n");
   return v;
}
