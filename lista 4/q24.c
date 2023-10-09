#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[5][2];
	int maior,menor,i,j,somap,somai;
	
	for(i=0;i<5;i++){
		printf("Digite: \n");
		for(i=0;i<2;i++){
			scanf("%i",&matriz[i][j]);
		}
	}
	
	for(i=0;i<5;i++){
		for(i=0;i<2;i++){
			if(matriz[i][j]>maior);
				maior = matriz[i][j];
		}
	}
	
	menor = maior;
	
	for(i=0;i<5;i++){
		for(i=0;i<2;i++){
			if(matriz[i][j]<menor);
				menor = matriz[i][j];
		}
	}
	
	for(i=0;i<5;i=i+2){
		for(i=0;i<2;i++){
			somap = somap + matriz[i][j];
		}
	}
	
	for(i=0;i<5;i=i+3){
		for(i=0;i<2;i++){
			somai = somai + matriz[i][j];
		}
	}
	
	printf("Maior elemento: %i \n",maior);
	printf("Menor elemento: %i \n",menor);
	printf("Soma dos pares: %i \n",somap);
	printf("Soma dos impares: %i \n",somai);
	
	
	
}
