#include <stdio.h>
#include <stdlib.h>

int main(){

	float metros, peso;
	int sexo, op;
	
	printf("Qual sua altura ? \n");
	scanf("%f",&metros);
	printf("Qual seu sexo?\n");
	printf("1. Feminino \n");
	printf("2. Masculino \n");
	scanf("%d",&op);
	switch(op){
		case 1:
			peso = (62.1*metros)-47.7;
			printf("Seu peso ideal eh: %.2f", peso);
			break;
		case 2:
			peso = (72.7*metros)-58;
			printf("Seu peso ideal eh: %.2f", peso);
			break;

	}
	
}
