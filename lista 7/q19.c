#include <stdio.h>
#include <stdlib.h>

int crescente(int x,int num[]){
	int i,cres=0;
	
	for(i=0;i<x;i++){
		if(num[i+1]>num[i]){
			cres = 0;
		}
		else if(num[i]<num[i+1]){
			cres = 1;
		}
	}
	return cres;
	
}

int main(){
	int n, vetor[n],i;
	
	printf("Quantos numeros tera seu vetor?\n");
	scanf("%i",&n);
	printf("Digite: \n");
	for(i=0;i<n;i++){
		scanf("%i",&vetor[i]);
	}

	printf("O vetor esta : \n 1 - Crescente \n 0 - Descrescente \n");
	printf("%i",crescente(n,vetor));
	
}
