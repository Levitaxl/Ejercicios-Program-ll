/*Ejercicio 1*/
/*Desarrolla un programa que dado un número
entero (N) y una potencia de 10 (P), devuelva
el número redondeado a la cifra según la
potencia de 10 indicada. El programa
redondeará números hasta que el usuario
entre un cero ( ya sea en N o en P)
Nota: No se permite trabajar números como string*/

/*Ejemplo
n=25123 p=1000 => 26000
n=25123 p=10   => 25130
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n=0;
	int p=0;
	int total=0;
	int nmod=0;
	int pbase=0;
	int ptotal=10;
	
	printf("Indique el dato n:  ");
	scanf( "%i", &n);
	printf("Indique la potencia p:  ");
	scanf( "%i", &p);
	pbase=p;
	
	p=p/10;
	
	while(p>=1){
		n=n/10;
		p=p/10;
		ptotal=ptotal*10;
	}
	
	nmod=n%10;
	
	if(nmod>=5){
		nmod++;
		nmod=nmod*ptotal/10;
		total=nmod+(pbase*(n/10)*10);
	}
	else{
		n=n/10;
		total=ptotal*n;
	}	
	
	printf("el total es: %d ",total);
	
	return 1;
}
