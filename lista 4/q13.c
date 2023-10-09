#include <stdio.h>
#include <stdlib.h>

int main(){
	int v[10];
	int i;
	
	printf("Digite 10 numeros: \n");
	for(i=0;i<10;i++){
		scanf("%i",&v[i]);
	}

	printf("O vetor invertido eh:");
	for(i=10;i>=0;i--){
		printf("%i ",v[i]);
	}
}
