#include <stdio.h>
#include <stdlib.h>

int main(){
	float valor, din, troco;
	
	printf("Qual o valor da compra? \n");
	scanf("%f",&valor);
	printf("Quanto foi pago? \n");
	scanf("%f",&din);

	
	if(din>valor){
		troco = din-valor;
		printf ("O troco eh de R$ %.2f", troco);
	}
	
	else
		printf("O dinheiro nao eh suficiente");
	
	
}
