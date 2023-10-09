#include <stdio.h>
#include <stdlib.h>

int main(){ 
	int pos=0,num;
	int i;
	
	for (i=0;i<10;i++){
		printf("Digite um numero: \n");
		scanf("%i",&num);
		if (num > 0){
			pos++;
		}
	}
	printf("A quantidade de numeros positivos eh: %i",pos);
	
}
