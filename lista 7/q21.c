#include <stdio.h>
#include <stdlib.h>

void numero(int v[],int *qnt,int *n){
	int i;
	
	*n = v[9];
	
	for(i=0;i<10;i++){
		if(v[i] == v[9]){
			(*qnt)++;
		}
	}
	
}


int main(){
	int vetor[10],quant,num,i;
	
	printf("Digite 10 numeros: \n");
	for(i=0;i<10;i++){
		scanf("%i",&vetor[i]);
	}
	
	numero(vetor,&quant,&num);
	
	printf("O numeros %i apareceu %i vezes",num,quant);
	

}
