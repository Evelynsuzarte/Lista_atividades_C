#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[10],i,maior=0,pos=0;
	
	printf("Digite 10 numeros: \n");
	for(i=0;i<10;i++){
		scanf("%i",&vetor[i]);
	}
	
	for(i=0;i<10;i++){
		if(vetor[i]>maior){
			maior = vetor[i];
			pos = i;
		}
	}
	
	printf("O maior numero eh %i, esta na posicao %i.",maior,pos+1);
	
}
