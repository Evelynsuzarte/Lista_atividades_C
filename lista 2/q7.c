#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	
	printf("Digite um numero:\n");
	scanf("%i",&x);
	
	if(x==1)
		printf("Janeiro");
	else if(x==2)
		printf("Fevereiro");
	else if(x==3)
		printf("Marco");
	else if(x==4)
		printf("Abril");
	else if(x==5)
		printf("Maio");
	else if(x==6)
		printf("Junho");
	else if(x==7)
		printf("Julho");
	else if(x==8)
		printf("Agosto");		
	else
		printf("NUMERO INVALIDO");
	
}
