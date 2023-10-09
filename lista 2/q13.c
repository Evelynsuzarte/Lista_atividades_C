#include <stdio.h>
#include <stdlib.h>

int main(){
	int tempo;
	float aux, aux2;

	printf("Quantas horas trabalhadas ? \n");
	scanf("%i",&tempo);

	if (tempo<=40){
		aux = tempo*8;
		printf("Seu salario semanal eh de: R$ %f", aux);
	}
	else{
		aux = tempo - 40;
		aux2 = aux*12;
		printf("Seu salario semanal eh de %.2f",320.00+aux2);
	}
		
	
	
}
