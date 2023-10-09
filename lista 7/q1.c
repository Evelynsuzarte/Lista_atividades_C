#include <stdio.h>
#include <stdlib.h>

int contar(int num){
	int result;
	if(2*(num*num)-7*num+3 == num){
		result = 1;
	}
	else
		result = 0;


	return result;	
}


int main(){
	int numero,entrada;
	
	printf("Digite um numero: \n");
	scanf("%i",&numero);

	entrada = contar(numero);
	
	if(entrada==1)
		printf("Este numero eh o resultado da equacao");
	else if(entrada==0)
		printf("Este numero nao eh o resultado da equacao");
	
}
