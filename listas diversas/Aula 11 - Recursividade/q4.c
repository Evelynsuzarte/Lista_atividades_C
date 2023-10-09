/* Escreva um programa que contenha uma função
recursiva que receba um número natural n, e devolva a
soma dos n primeiros números naturais ímpares. */

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
