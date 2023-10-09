#include <stdio.h>
#include <stdlib.h>

// nao está feito

void contagem(int num[],int x,int *qnt_digitos[],int *qual_primeiro_digito){
	int i;
	
	for(i=0;i<x;i++){
		if(num[i]!='\0'){
			if(num[i]== 1 && num[i]<9){
				*(qnt_digitos[i])++;
			}
		}
	}
	
	
	
	
	
}




int main(){
	int n;
	int vetor[n],i;
	int digitos[n],primeiro_digito[n];
	
	printf("Quantos numeros vc vai digitar? \n");
	scanf("%i",&n);
	printf("Digite: \n");
	for(i=0;i<n;i++){
		scanf("%i",&vetor[i]);
	}
	
	contagem(vetor,n,&digitos,&primeiro_digito);

	
	printf("Numero: %i \tQuantidade de digitos: %i \tPrimeiro digito: %i  \n",vetor[i],digitos,primeiro_digito);
	
}
