#include <stdio.h>
#include <stdlib.h>

int main(){
	int salario= 0,valor=0,total=0, dif=0;		// as variaveis tem lixo 
	int qnt,i;
	
	printf("Qual o valor do seu salario? \n");
	scanf("%f",&salario);
	printf("Quantas despesas voce precisa pagar? \n");
	scanf("%i",&qnt);
	printf("Qual o valor de cada conta? \n");
	for(i=0; i<qnt; i++){
		printf("Conta %i \n",i+1);
		scanf("%i",&valor);
		total = total + valor;
	}
	dif = salario - total;
	
	printf("Salario %i",salario);
	printf("Dif %i ",dif);
	printf("total %i", total);
	
	if(dif<salario)
		printf("A diferenca eh positiva: R$ %i",dif);
	else if(dif>salario)
		printf("Reduzir despesas");
	
	
}
