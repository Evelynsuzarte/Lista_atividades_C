#include <stdio.h>
#include <stdlib.h>

int main(){
	float limite[10],porc,soma;
	int acres=0;
	int i;
	
	printf("Digite o limite dos clientes: \n");
	
	for(i=0;i<10;i++){
		scanf("%i",&limite[i]);
	}
	
	for(i=0;i<10;i++){
		if(limite[i]>1000){
			acres++;
			porc = (float)((limite[i]*20)/100);		//nao funciona;
			soma = (porc + limite[i]);
			limite[i] = soma;
		}
	}
	
	printf("\nClientes que receberam acrescimo: %i \n", acres);
	printf("Valores atualizados: \n");
	for(i=0;i<10;i++){
		printf("%.2f \n",limite[i]);
	}
}
