#include <stdio.h>
#include <stdlib.h>

int main(){
	float p,a,imc;
	
	printf("Digite seu peso\n");
	scanf("%f",&p);
	printf("Digite sua altura\n");
	scanf("%f",&a);
	
	imc = p/(a*a);
	
	printf("O seu imc é %.1f",imc);
}

