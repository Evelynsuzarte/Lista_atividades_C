#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[30], n;
	int i, contador=0;
	
	printf("Digite 30 numeros: \n");
	for(i=0;i<30;i++){
		scanf("%i",&vetor[i]);
	}
	printf("Digite um numero que deseja buscar: \n");
	scanf("%i",&n);
	for(i=0;i<30;i++){
		if(vetor[i]==n)
			contador++;
	}
	
	printf("O numero %i aparece %i vezes",n,contador);
}
