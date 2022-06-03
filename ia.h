#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifndef _IA_H_
#define _IA_H_

typedef struct _abiertos {	
	int valor;
	struct _abiertos * siguiente;	
}abiertos;

typedef abiertos * ColaAbiertos;

typedef struct _hoja {
	int nombreNodo;
	int cantOpciones;
	int resultado;
	int nombreRama;
	int valorDestino;	
	struct _hoja * hojaSig;	
}hoja;

typedef hoja *Cola;

double entropia (double par, double impar, double conjunto);
double ganancia (int valor[14][5],int columna);
int positivos(int conjunto[14][5], int positivo);
int arbolDecision(int conjunto[14][5], int valorPredefinido);
int contador(int a, int b);
int mejorAtributo(double entropia, int conjunto[14][5]);
int nodo(int conjunto[14][5]);
void indice(int conjunto[14][5],int aux[5]);
int calculoOcurrencia(int conjEntrenamiento[14][5], int columna, int valor);
void subConjunto(int conjunto[14][5], int subconjunto[14][5], int valor, int columna);
void mostrarSubconjunto(int subconjunto[14][5]);
void verContenido(Cola nodo);
void guardarContenido(Cola raiz);

/* Funciones con colas: */

void Anadir(Cola *primero, Cola *ultimo, int nombreNodo, int cantOpciones, int resultado, int nombreRama, int valorDestino);
int Leer(Cola *primero, Cola *ultimo);

void AnadirAbiertos(ColaAbiertos* primero, ColaAbiertos *ultimo, int v);
int  LeerAbiertos(ColaAbiertos *primero, ColaAbiertos *ultimo);

#endif
