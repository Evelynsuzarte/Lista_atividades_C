/* Escreva um programa que contenha uma fun��o
recursiva que receba um n�mero natural n, e devolva a
soma dos n primeiros n�meros naturais �mpares. */

#include <stdio.h>
#include <stdlib.h>

int impares(int n);

int main(){
	int n;
	int soma;
	
	printf("Digite um numero: \n");
	scanf("%i",&n);
	soma = impares(n);
	
	printf("%i",soma);
}

int impares(int n){
	int i,total;
	for(i=1;i<n;i++){
		if(i%2 != 0){
			total = total + i;
		}

	} return total-1;
}
