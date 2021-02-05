/*Ejercicio 4*/

/*
Escribe un programa que determine la
cantidad f de formas en las que se puede
escribir un número entero positivo n como
suma de uno o más números enteros positivos
consecutivos.*/

/*
Ejemplo:
Si n = 33 entonces f = 4 ya que
3 + 4 + 5 + 6 + 7 + 8 = 10 + 11 + 12 = 16 + 17 = 33.*/

#include <stdio.h>
#include <stdlib.h>

int main() { 
	int n=0;
	int f=0;
	int sum=0;
	
	printf("Indique el dato n:  ");
	scanf( "%i", &n);
	
	for (int i = 1; i <= n; ++i){
		sum=0;
		for (int j = i; j <= n; ++j){
			sum=sum+j;
			if(sum==n)f++;
			else if(sum>n)break;
		}
	}
	
	printf("Resultado: %d", f);
}
