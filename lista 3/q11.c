#include <stdio.h>
#include <stdlib.h>

int main(){
	int ini, fin;
	int soma, i;
	
	printf("Defina o intervalo para soma dos numeros: \n");
	scanf("%i %i",&ini,&fin);
	
	for(i=ini; i<=fin; i++){
		soma = soma+i;
	}
	printf("O total da soma foi: %i",soma);
	
}
