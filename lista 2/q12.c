#include <stdio.h>
#include <stdlib.h>

int main(){
	float salario, aux;
	int idade, tempo;
	
	printf("Qual a sua idade? \n");
	scanf("%i",&idade);
	printf("Qual o tempo de servico? \n");
	scanf("%i",&tempo);
	printf("Qual o seu salario? \n");
	scanf("%f",&salario);

	if(idade<50 && tempo<5){
		printf("Voce nao pode receber a bonificação");
	}
		
	else if(idade>=50 || tempo>=5){
		aux = salario+500.00;
		printf("Seu novo salario eh R$%.2f", aux);
}
	
	
}
