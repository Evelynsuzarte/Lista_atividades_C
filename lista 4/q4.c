#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[5];
	int x, i, menor;
	
	printf("Digite 5 numeros: \n");
	for(i=0;i<5;i++){
		scanf("%i",&vetor[i]);
	}
	printf("Digite um numero: \n");
	scanf("%i",&x);
	
	for(i=0;i<5;i++){
		if(vetor[i]<x)	
			vetor[i]=x;
	}
	
	printf("O vetor ficou: ");
	for(i=0;i<5;i++)	
		printf("%i \n",vetor[i]);	
}
