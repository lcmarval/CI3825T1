/* Funcion: cambiar opcion 
	Autores:Francisco Marquez [12-11163]
			Luis Marval	[12-10620]

La función cambiarOpcion toma un entero entre 1 y 9, 
ambos inclusive, y bajo un switch-case despliega diferentes 
menú por la salida estándar donde solicita al usuario el 
cambio en la opción deseada.*/
void cambiarOpcion(int opcion) {
	switch (opcion) {
		case 1:
			do {
				printf("Cambiar la modalidad\n\n");
				printf("Seleccione la modalidad de su preferencia:\n");
				printf("(0) Modalidad interactiva (default)\n");
				printf("(1) Modalidad automática\n");
				scanf("%i", &opciones[0]);
			} while (opciones[0] < 0 || opciones[0] > 1);
			break;
		case 2:
			do {
				printf("Cambiar la cantidad de carritos en la cola\n");
				printf("Indique cuántos carritos estarán en la cola\n");
				scanf("%i", &opciones[1]);
			} while (opciones[1] < 1);
			break;
		case 3:
			do {
				printf("Cambiar la cantidad máxima de elementos por carrito\n");
				printf("Indique cuántos elementos podrá tener un carrito\n");
				scanf("%i", &opciones[2]);
			} while (opciones[2] < 1);
			break;
		case 4:
			do {
				printf("Cambiar la capacidad máxima de la banda ");
				printf("transportadora\n");
				printf("Indique cuántos cc podrán colocarse en la banda ");
				printf("transportadora\n");
				scanf("%i", &opciones[3]);
			} while (opciones[3] < 1);
			break;
		case 5:
			do {
				printf("Cambiar la velocidad de la cajera\n");
				printf("Indique cuál será la velocidad de la cajera, ");
				printf("en operaciones por bolsa\n");
				scanf("%i", &opciones[4]);
			} while (opciones[4] < 1);
			break;
		case 6:
			do {
				printf("Cambiar la velocidad del embolsador\n");
				printf("Indique cuál será la velocidad del embolsador, ");
				printf("en segundos por bolsa\n");
				scanf("%i", &opciones[5]);
			} while (opciones[5] < 1);
			break;
		case 7:
			do {
				printf("Cambiar el tiempo de facturación\n");
				printf("Indique cuál será el tiempo de facturación, ");
				printf("en segundos\n");
				scanf("%i", &opciones[6]);
			} while (opciones[6] < 1);
			break;
		case 8:
			do {
				printf("Cambiar la capacidad máxima del área de embolsado\n");
				printf("Indique cuántos cc podrán colocarse en el área de ");
				printf("embolsado\n");
				scanf("%i", &opciones[7]);
			} while (opciones[7] < 1);
			break;
		case 9:
			do {
				printf("Cambiar la capacidad máxima de una bolsa\n");
				printf("Indique cuántos cc podrán colocarse en una bolsa\n");
				scanf("%i", &opciones[8]);
			} while (opciones[8] < 1);
			break;
	}
}