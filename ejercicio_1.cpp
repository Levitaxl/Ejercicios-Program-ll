/*Ejercicio 1*/
/*Desarrolla un programa que dado un n�mero
entero (N) y una potencia de 10 (P), devuelva
el n�mero redondeado a la cifra seg�n la
potencia de 10 indicada. El programa
redondear� n�meros hasta que el usuario
entre un cero ( ya sea en N o en P)
Nota: No se permite trabajar n�meros como string*/

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
