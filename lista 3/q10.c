#include <stdio.h>
#include <stdlib.h>

int main(){
	int n[11];
	int i,soma;
	float media;
	
	printf("Digite 10 numeros \n");
	
	for(i=0; i<10; i++){
		scanf("%i",&n[i]);
	}
	
	for(i=0; i<10; i++){
		soma = soma + n[i];
	}
	
	media = soma/10;
	
	printf("\nA media dos numeros eh: %.2f", media);
	
	
	
}
