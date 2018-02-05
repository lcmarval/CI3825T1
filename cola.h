#include <stdlib.h>
#include "nodoLista.h"

#define TRUE 1
#define FALSE 0
#define BOOLEAN int

typedef struct queue COLA;

struct queue {
	nodo inicio;
	nodo fin;
	int longitud;
};

BOOLEAN estaVacia(COLA);
void encolar(COLA, nodo);
nodo desencolar(COLA);

BOOLEAN estaVacia(COLA *cola) {
	return (*cola).longitud == 0;
}

void encolar(COLA *cola, nodo *elemento) {
	(*elemento).siguiente = (*cola).fin;
	(*cola).fin = (*elemento);
	(*cola).longitud++;
}

nodo desencolar(COLA *cola) {
	nodo retorno;
	if ((*cola).longitud > 0) {
		retorno = (*cola).inicio;
		(*cola).inicio = (*cola).inicio.siguiente;
		(*cola).longitud--;
	}
	return retorno;
}