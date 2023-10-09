#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int contador=0, raiz, soma;
	
	printf("De qual numero voce quer saber a raiz?\n");
	scanf("%i",&raiz);
	
	for(i=1;i<raiz; i=i+2){
		soma = soma+i;
		contador++;
		if(soma==raiz)
			break;
		
	}
	
	printf("A raiz de %i eh : %i",raiz,contador);
	
}
