#include <stdlib.h>
#include <string.h>
#include "nodoLista.h"

#define TRUE (0==0)
#define FALSE !(TRUE)
typedef BOOLEAN int;

typedef struct listaOrdenada lista;

lista crearLista();
BOOLEAN agregarElemento(lista, nodo);
nodo buscarElemento(lista, nodo);
BOOLEAN deleteElemento(lista, nodo);

struct listaOrdenada {
	nodo cabezaLista;
	int longitud;
}

lista crearLista() {
	lista *listaNueva;
	(*listaNueva).cabezaLista = NULL;
	(*listaNueva).longitud = 0;
	return *listaNueva;
}

BOOLEAN agregarElemento(lista *listaActual, nodo *elemento) {
	if ((*listaActual).longitud == 0) {
		(*listaActual).cabezaLista = *elemento;
		return TRUE;
	}
	nodo *aux = (*listaActual).cabezaLista;
	nodo *anterior;
	while ((*aux) != NULL) {
		if (strcmp((*aux).nombre,(*elemento).nombre) <= 0){
			if (*anterior == NULL) {
				(*elemento).siguiente = (*listaActual).cabezaLista;
				(*listaActual).cabezaLista = *elemento;
			}
			else {
				(*elemento).siguiente = (*anterior).siguiente;
				(*anterior).siguiente = *elemento;
			}
			return TRUE;
		}
		*anterior = *aux;
		*aux = (*aux).siguiente;
	}
	return FALSE;
}

nodo buscarElemento(lista *listaActual, nodo *elemento) {
	nodo *aux = (*listaActual).cabezaLista;
	BOOLEAN encontrado = FALSE;
	while (*aux != NULL && encontrado == FALSE) {
		*aux = (*aux).siguiente;
		encontrado = strcmp((*aux).nombre, (*elemento).nombre);
	}
	return *aux;
}

BOOLEAN deleteElemento(lista *listaActual, nodo *elemento) {
	nodo *aux = (*listaActual).cabezaLista;
	nodo anterior = NULL;
	BOOLEAN encontrado = FALSE;
	while (*aux != NULL && encontrado == FALSE) {
		*anterior = *aux;
		*aux = (*aux).siguiente;
		encontrado = strcmp((*aux).nombre, (*elemento).nombre);
	}
	if (*anterior != NULL) {
		(*anterior).siguiente = (*aux).siguiente;
	}
	else {
		if (encontrado) {
			(*listaActual).cabezaLista = (*elemento).siguiente;
		}
	}
	return encontrado;
}