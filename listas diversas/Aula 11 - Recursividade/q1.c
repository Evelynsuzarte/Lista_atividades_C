/* Escreva um programa que lê um número inteiro N e aloca
dinamicamente um vetor com N posições. Em seguida seu programa
deve chamar uma única função que deverá ler uma sequência de N
inteiros positivos naquele vetor, e calcular a média e a soma dos
elementos do vetor. A main deve imprimir os resultados da função.*/

#include <stdio.h>
#include <stdlib.h>

void chamada(int vetor[],int n,int *positivos[],int *soma, float media);

int main(){
	int n;
	int *p,vetor[n],i;
	int positivos[n],soma;
	float media;
	
	printf("Qual o tamanho do vetor? \n");
	scanf("%i",&n);
	p = (int*) malloc (n*sizeof(int));
	printf("Digite os numeros: \n");
	for(i=0;i<n;i++){
		scanf("%i",&vetor[n]);
	}
	
	if(p == NULL){
		printf("Erro");
	}
	else{
		chamada(vetor,n,positivos,&soma,&media);
	
	}
	
}

void chamada(int vetor[],int n,int *positivos[],int *soma, float media){
	int i;
	for(i=0;i<n;i++){
		if(vetor[i] %2 == 0){
			*positivos[i] = vetor[i];
		}
	}

	for(i=0;i<n;i++){
		*soma = soma + vetor[i];
		}
		
	media = (soma/n);
	
	
	}
	
	
	

