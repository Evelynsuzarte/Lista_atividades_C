#include <stdio.h>
#include <stdlib.h>

void maior(int v[], int *vez){
	int i;
	
	for(i=0;i<10;i++){
		if(v[i]<v[i+1])
			(*vez)++;
	}
}

int main(){
	int vetor[10],i,vezes;
	
	printf("Digite 10 numeros:\n");
	for(i=0;i<10;i++){
		scanf("%i",&vetor[i]);
	}
	
	maior(vetor,&vezes);
	
	printf("Quantidade de numeros que tem na posicao seguinte um numero maior: %i",vezes);
}
