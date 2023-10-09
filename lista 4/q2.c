#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[10];
	int i, n,encontrado;
	
	printf("Digite 10 numeros: \n");
	for(i=0;i<10;i++){
		scanf("%i",&vetor[i]);
	}
	printf("Informe o numero que deseja buscar: \n");
	scanf("%i",&n);
for(i=0;i<10;i++){
	if(vetor[i]==n){
			encontrado = i;
			break;
		}
		else {
			//break;
			printf("O numero informado nao esta no vetor.");

		}
	
}	
			printf("O numero informado esta na casa numero %i .",encontrado);

			
			
			
	}
