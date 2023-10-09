#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,p,ng;
	int i;
	
	do{
		printf("Digite um numero: \n");
		scanf("%i",&n);
		if(n>0)
			p++;
		if(n<0)
			ng++;
	}while(n!=0);
	
	printf("Numeros positivos : %i",p);
	printf("Numeros negativos: %i",ng);
	
}
