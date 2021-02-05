/*Ejercicio 3*/

/*
Una compa��a desea transmitir datos por
tel�fono, pero est�n preocupados de que sus
tel�fonos est�n intervenidos. Todos sus datos
se transmiten como enteros de cuatro d�gitos.
Se requiere de un programa que encripte los
datos para poderlos transmitir con mayor
seguridad. El programa deber� leer un entero
(N) de 4 d�gitos (d1d2d3d4) introducido por el
usuario y modificarlo como sigue: se sustituye
cada d�gito (di) por el residuo de dividir (di + 7
) entre 10. Luego, se intercambia el primero y el tercer d�gito y luego el
segundo y cuarto d�gito. Por �ltimo se imprime el n�mero convertido.
(Nota: Debe tratarse el n�mero como entero no como string)
*/

/*Ejemplo
Ejemplo:
N = 7648.
Salida: 1543
Proceso:
7 + 7 = 14 mod 10 = 4
6 + 7 = 13 mod 10 = 3
4 + 7 = 11 mod 10 = 1
8 + 7 = 15 mod 10 = 5
Y se intercambian luego el
primer d�gito (4) con el
tercero (1) y el segundo (3)
con el cuarto (5)
*/

#include <stdio.h>
#include <stdlib.h>

int encriptar(int numero);

int main() {	
	int n=0;
	int aux=0;
	int numero1=0;
	int numero2=0;
	int numero3=0;
	int numero4=0;
	int total=0;
	
	printf("Indique el dato n:  ");
	scanf( "%i", &n);
	
	for (int i = 1; i <= n; ++i){
		aux=n%10;
		if(i==1)		numero2=encriptar(aux)*100;
		else if(i==2)	numero4=encriptar(aux)*1000;
		else if(i==3)	numero3=encriptar(aux);
		else if(i==4)	numero1=encriptar(aux)*10;
		n=n/10;			
	}
	
	total=numero1+numero2+numero3+numero4;
	
	printf("Total: %d", total);
	return 1;
}

int encriptar(int numero) {
	return (numero+7)%10;
}
