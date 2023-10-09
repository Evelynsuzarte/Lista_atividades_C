#include <stdio.h>
#include <stdlib.h>

int main(){
	float peso, normal, dif;
	int idade;
	
	printf("Qual sua idade? \n");
	scanf("%i", &idade);
	printf("Qual seu peso? \n");
	scanf("%i", &peso);
	
	normal = ((idade-6)/4.4)+2.3*(idade-6)+22;
	dif = peso - normal;
	
	if(2<=dif<5)
		printf("Parar de tomar refrigerante");
	else if(5<dif<10)
		printf("Parar de comer doces.");
	else if(dif>=10)
		printf("Parar de tomar refrigerantes e doces.");
	
	
	
	
}
