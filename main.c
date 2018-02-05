#include <stdio.h>
#include "listaOrdenada.h"
#include "pila.h"
#include "cola.h"
#include "cambiarOpcion.h"
// funciones
#include "generarCarritos.h"
#include "llenarCarritos.h"
#include "cargarCaja.h"
#include "procesarProductos.h"
#include "embolsar.h"
#include "facturar.h"

/*Opciones de simulación*/
/*La opciones se guardan en un arreglo de 9 posiciones y cada una almacena el valor actual de la opción*/
/*Las opciones van en el siguiente orden:
 *	0: modalidad;
 *	1: cantidad de carritos en cola;
 *	2: cantidad máxima de elementos en un carrito;
 *	3: capacidad máxima de la banda transportadora, en cm³;
 *	4: velocidad de la cajera, en operaciones por segundo;
 *	5: velocidad del embolsador, en segundos por bolsa;
 *	6: tiempo de facturación, en segundos;
 *	7: capacidad máxima del área de embolsado, en cm³;
 *	8: capacidad máxima de una bolsa, en cm³;
 */
int opciones[9] = {0, 3, 30, 200, 1, 4, 130, 150, 120};

/*Programa principal*/
int main(int argc, char const *argv[]) {
	if (argc == 1) {
		printf("No se ha especificado archivo con inventario.\n");
		printf("El programa terminará, we're sorry\n");
		printf("Have a nice day!\n");
		return EXIT_FAILURE;
	}
	//menuPrincipal();
	/*A partir de aquí es el menú principal de la simulación*/
	int opcion;
	int choice;
	do {
		printf("Bienvenido al simulador de la tienda CI-3825\n");
		printf("Por favor, seleccione una opción:\n");
		printf("(1) Ejecutar la simulación\n");
		printf("(2) Cambiar las opciones de simulación\n");
		printf("(3) Salir del programa\n");
		scanf("%i", &opcion);
		fflush(stdin);
	} while (opcion < 1 || opcion > 3);
	switch (opcion) {
		case 1:
			generarCarritos();	// debe recibir la cantidad de carritos
			llenarCarritos();	// debe recibir como @parm cantidad maxima de objetos
			cargarCaja();		// recibe capacidad de banda transportadora
			procesarProductos();// recibe velocidad de la cajera
			embolsar();			// recibe capacidad maxima de embolsado y velocidad
			facturar();			// recibe velocidad de factuacion
			break;				// no deberia ser break debe ser imprimir y volver a menu
		case 2:
			do {
				printf("Seleccione la opción que desea modificar:\n");
				printf("(1) Modalidad\n");
				printf("(2) Cantidad de carritos en la cola\n");
				printf("(3) Cantidad máxima de productos que puede tener un carrito\n");
				printf("(4) Capacidad máxima de la banda transportadora\n");
				printf("(5) Velocidad de la cajera\n");
				printf("(6) Velocidad del embolsador\n");
				printf("(7) Tiempo de facturación\n");
				printf("(8) Capacidad máxima del área de embolsado\n");
				printf("(9) Capacidad máxima de una bolsa\n");
				printf("(0) Culminar modificación\n");
				scanf("%i", &choice);
			} while (choice < 0 || choice > 9);
			cambiarOpcion(choice);
			if (choice == 0) {
				break;
			}
		case 3:
			break;
	}
	/*ESCRIBIR ARCHIVO.LOG*/
	return EXIT_SUCCESS;
}

