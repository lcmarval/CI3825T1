#include <stdlib.h>
#include "nodoLista.h"

#define TRUE (0==0)
#define FALSE !(TRUE)
//#define BOOLEAN union{TRUE, FALSE}

typedef struct stack PILA;

struct stack {
	nodo top;
	int longitud;
};

BOOLEAN estaVacia(PILA);
void apilar(PILA, nodo);
nodo desapilar(PILA);

BOOLEAN estaVacia(PILA *pila) {
	return (*pila).longitud == 0;
}

void apilar(PILA *pila, nodo *elemento) {
	(*elemento).siguiente = (*pila).top;
	(*pila).top = (*elemento);
	(*pila).longitud++;
}

nodo desapilar(PILA *pila) {
	nodo retorno;
	if ((*pila).longitud > 0) {
		retorno = (*pila).top;
		(*pila).top = (*pila).top.siguiente;
	}
	return retorno;
}