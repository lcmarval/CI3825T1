struct nodoLista;
typedef struct nodoLista nodo;

struct nodoLista {
	char *nombre;
	int complejidad;
	int cantidad;
	int *siguiente;
};

char getNombre(nodo *elemento);
int getComplejidad(nodo *elemento);
int getCantidad(nodo *elemento);
void setNombre(nodo *elemento, char *nombreNuevo);
void setComplejidad(nodo *elemento, int complejo);
void setCantidad(nodo *elemento, int cuanto);

char getNombre(nodo *elemento) {
	char *retorno;
	strcpy(retorno, (*elemento).nombre);
	return *retorno;
}

int getComplejidad(nodo *elemento) {
	return (*elemento).complejidad;
}

int getCantidad(nodo *elemento) {
	return (*elemento).cantidad;
}

void setNombre(nodo *elemento, char* nombreNuevo) {
	(*elemento).nombre = nombreNuevo;
}

void setComplejidad(nodo *elemento, int complejo) {
	(*elemento).complejidad = complejo;
}

void setCantidad(nodo *elemento, int cuanto) {
	(*elemento).cantidad = cuanto;
}

void imprimirNodo(nodo *elemento) {
	printf("%s\n", );
}