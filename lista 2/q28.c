#include <stdio.h>
#include <stdlib.h>

int main(){
	int max, vel, dif; 
	float porc;
	
	printf("Qual a velocidade permitida? \n");
	scanf("%d",&max);
	printf("Qual a velocidade do veiculo? \n");
	scanf("%d",&vel);
	
	porc = (20*max)/100;
	dif = vel - max;
	
	if(vel<=max)
		printf("Voce nao pagara multa");
	else if(dif<porc)
		printf("Voce pagara ate R$ 250,00 de multa");
	else if(dif>porc)
		printf("Voce pagara ate R$ 750,00 de multa");
	
}
