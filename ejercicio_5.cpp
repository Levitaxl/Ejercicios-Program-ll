/*Ejercicio 5*/
/*
El cuadrado de un n�mero N puede calcularse con la suma
de los N primeros n�meros impares. Dise�a un algoritmo
para obtener el cuadrado de un entero positivo N
bas�ndose en esta propiedad. Por ejemplo:
*/

#include <stdio.h>
#include <stdlib.h>

int main() { 
	int n=0;
	int suma=0;
	int permiso_primer=1;
	
	printf("Indique el dato n:  ");
	scanf( "%i", &n);
	
	for (int i = 1; i < (n*n); ++i){
		if(i%2!=0){
			suma=suma+i;
			if(permiso_primer){
				printf("%d", i);
				permiso_primer=0;
			}
			else  printf("+%d", i);
			if(suma==(n*n))break;
		}
	}
	
	printf("\n El n�mero es %d", suma);	
}
