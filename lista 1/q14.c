#include <stdio.h>
#include <stdlib.h>

int main(){
	float maior;
	float menor;
	float altura;
	float a;
	
	printf("Digite a base maior:\n");
	scanf("%f",&maior);
	printf("Digite a base menor:\n");
	scanf("%f",&menor);
	printf("Digite a altura:\n");
	scanf("%f",&altura);
	
	a=((maior+menor)*altura)/2;
	
	printf("A area do trapezio eh %.1f", a);

	
}

