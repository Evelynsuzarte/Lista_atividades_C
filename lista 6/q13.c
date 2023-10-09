#include <stdlib.h>
#include <stdio.h>

int calculo(int id,int f);

int main(){
	int idade,freq;
	float resultado;
	
	printf("Digite sua idade: \n");
	scanf("%i",&idade);
	printf("Digite sua frequencia cardiaca: \n");
	scanf("%i",&freq);
	
	resultado = calculo(idade,freq);
	
	printf("A frequencia cardiaca minima de treinamento eh: %.1f", resultado);
	
}

int calculo(int id,int f){
	float fct;
	fct = f + 0.6 * ((220-id)-f);
	
	return fct;
}




