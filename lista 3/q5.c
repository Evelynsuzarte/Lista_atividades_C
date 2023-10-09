#include <stdio.h>
#include <stdlib.h>

int main(){					// nao funcionou
	int n[10], aux;
	int i;
	int maior=0,menor=0;
	
	printf("Digite uma sequencia de numeros: \n");
/*	while(n[i]!=0){ 
		scanf("%i",&n[i]);
		i++;
	}
*/	
	for(i=0;i<10;i++){
		scanf("%i",&n[i]);
	}
	
	
	for(i=0;i<10;i++){
		if(n[i]>maior){
			maior = n[i];
		}
		else if (n[i]<maior){
			aux = n[i];
			if(n[i]<aux){
				menor = aux;
			}
				
		}
	}
	
	
/*	
	while(n[i]=0){
		if(n[i]>maior){
			maior = n[i];
		}
		else if (n[i]<maior){
			aux = n[i];
			if(n[i]<aux)
				menor = aux;
		}
		i++;
	}
*/	
	printf("O maior numero da sequencia eh : %i", maior);
	printf("\n O menor numero da sequecia eh: %i", menor);
	
	
}
