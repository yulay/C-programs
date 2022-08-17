#include <stdio.h>

int main (){
	
	int arreglo[21][21];
	int fila, columna;
	
	//Llenar la columna 0, con valores consecutivos de 0 a 20
	for (fila = 0; fila<=20; fila++) {
		arreglo[fila][0] = fila;
		//Llenar la fila 0, con valores consecutivos de 0 a 20
		for(columna = 0; columna<=20; columna++) {
			arreglo[0][columna] = columna;
		}
	}
	
	//Realizar la multiplicación
	for (fila = 0; fila<=20; fila++) {
		if (fila == 0)
			continue;
		
		for(columna = 0; columna<=20; columna++) {
			if(columna == 0)
				continue;
			
			arreglo[fila][columna] = fila * columna;
		}
	}
	
	//Mostrar el arreglo
	for (fila = 0; fila<=20; fila++) {
		for(columna = 0; columna<=20; columna++) {
			printf("%d\t", arreglo[fila][columna]);
		}
		printf("\n");
	}
	
	return 0;
}
