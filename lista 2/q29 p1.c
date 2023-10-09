#include <stdio.h>
#include <stdlib.h>

int main(){
	int op;
	float valor, conv;
	
	printf("Digite o valor deseja converter: \n");
	scanf("%f",&valor);
	printf("Selecione a moeda que deseja converter para reais: \n");
	printf("1. Dolar \n");
	printf("2. Euro \n");
	printf("3. Lene \n");
	scanf("%i",&op);
	switch(op){
		case 1:
			conv = valor*2.35;
			printf("%.2f em reais eh: %.2f",valor, conv);
			break;
		case 2:
			conv = valor*2.98;
			printf("%.2f em reais eh: %.2f",valor, conv);
			break;
		case 3:
			conv = valor*0.02;
			printf("%.2f em reais eh: %.2f",valor, conv);
			break;
		
		
	}
	
}
