#include "ia.h"

void Anadir(Cola *primero, Cola *ultimo, int nombrenodo, int cantopciones, int res, int nombrerama, int valordestino)
{
   Cola nuevo;
 
   /* Crear un nodo nuevo */
   nuevo = (Cola)malloc(sizeof(hoja));
   nuevo->nombreNodo = nombrenodo;
   nuevo->cantOpciones =cantopciones ;
   nuevo->resultado = res;
   nuevo->nombreRama =nombrerama ;
   nuevo->valorDestino =valordestino ;


   /* Este será el último nodo, no debe tener siguiente */
   nuevo->hojaSig = NULL;
   /* Si la cola no estaba vacía, añadimos el nuevo a continuación de ultimo */
   if(*ultimo) (*ultimo)->hojaSig = nuevo;
   /* Ahora, el último elemento de la cola es el nuevo nodo */
   *ultimo = nuevo;
   /* Si primero es NULL, la cola estaba vacía, ahora primero apuntará también al nuevo nodo */
   if(!*primero) *primero = nuevo;
}
