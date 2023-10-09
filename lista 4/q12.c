#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[10];
	int i,j;
	
	printf("Digite 10 numeros: \n");
	for(i=0;i<10;i++){
		scanf("%i",&vetor[i]);
	}

	for(i=0;i<10;i++){
		if(vetor[i+1]-vetor[i]==vetor[i+1]-vetor[i]){
		}
			printf("Os numeros formam uma progressao aritmetica ");	
		else
			printf("Nao eh uma progressao aritmetica");
}
}
