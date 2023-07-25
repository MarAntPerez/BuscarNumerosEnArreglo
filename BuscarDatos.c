#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const int TAMANIO_ARREGLO = 5;
	
	int numeros[TAMANIO_ARREGLO];
	numeros[0] = 5;
	numeros[1] = 3;
	numeros[2] = 1;
	numeros[3] = 2;
	numeros[4] = 4;
	
    int tamanioNumeros = sizeof(numeros) / sizeof(numeros[0]);
    int numeroEncontrado = -1;
    int i;
    int numeroBuscado;
    int numeroGuardado;
    int intercambio = 1;
    int contadorIntercambios;
    
    while(intercambio){
	contadorIntercambios = 0;
	
    	for (i = 0; i < TAMANIO_ARREGLO; i++){
		
			if(numeros[i] > numeros[i+1]){
				numeroGuardado = numeros[i];
				numeros[i] = numeros[i+1];
				numeros[i+1] = numeroGuardado;
				contadorIntercambios++;
			}

		}
		
		if(contadorIntercambios == 0){
			intercambio = 0; //1 significa no surgio intercambio
		}
		
	}
    
    printf("¿Que numero deseas buscar?\n");
    printf("1, 2, 3, 4, 5.\n");
    scanf("%i", &numeroBuscado);
    
    for (i = 0; i < TAMANIO_ARREGLO; i++){
        if (numeros[i] == numeroBuscado){
            numeroEncontrado = i;
        }
    }
    
    if(numeroEncontrado == -1){
        printf("No se encontro el numero %i.", numeroBuscado);
    }else{
        printf("El numero %i se encuentra en la posicion %i.\n", numeroBuscado, numeroEncontrado + 1);
    }
    
    for(i = 0; i < TAMANIO_ARREGLO; i++){
    	printf("%i ", numeros[i]);
	}
	
	printf("\nLos numeros ordenados son:\n");
	for(i = 0; i < TAMANIO_ARREGLO; i++){
		printf("%i ", numeros[i]);
	}
	
	return 0;
}
