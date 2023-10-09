#include <stdio.h>
#include <stdlib.h>

int main(){
	int quant, porc;
	float preco, impos, total, aux;
	
	printf("Quantidade de produtos : \n");
	scanf("%i",&quant);
	printf("Valor do produto: \n");
	scanf("%f",&preco);
	printf("Porcentagem de imposto: \n");
	scanf("%i",&porc);
	
	aux = preco*quant;
	impos = (aux*porc)/100;
	total = aux + impos;
	
	printf ("Valor pago: %.2f ", total);
	
	
}
