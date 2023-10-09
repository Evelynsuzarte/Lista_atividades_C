#include <stdio.h>
#include <stdlib.h>

int main(){
	int v[11];
	int i;
	int maior=0;
	
	printf("Digite 10 numeros: \n");
	for(i=0;i<10;i++){
		scanf("%i",&v[i]);
	}
	
	for(i=0;i<10;i++){
		if(v[i]>maior){
			maior = v[i];
		}	
	}
	
	printf("O maior numero da sequencia eh : %i", maior);
	
}
