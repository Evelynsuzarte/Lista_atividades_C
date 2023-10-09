#include <stdio.h>
#include <stdlib.h>

int main(){
	float n;
	int qnt;
	
	do{
		printf("Digite uma nota: \n");
		scanf("%f",&n);
		if(n>=7.0)
			qnt++;
	}while(n>=0.0 && n<=10.0);
	
	printf("Quantidade de notas maiores ou iguais a 7: %i",qnt);
}
