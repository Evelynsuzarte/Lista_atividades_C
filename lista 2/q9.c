#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade,lingua;
	float altura;
	
	printf("Qual sua idade? \n");
	scanf("%i",&idade);
	printf("Qual sua altura? \n");
	scanf("%f",&altura);
	printf("Quantas linguas voce fala fluentemente? \n");
	scanf("%i",&lingua);
	
	if(idade>=24 && altura>=1.70 && lingua>=2)
		printf("Voce atende aos requisitos");
	else
		printf("Voce nao atende aos requisitos");
	
	
}
