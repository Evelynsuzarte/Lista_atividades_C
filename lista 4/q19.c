#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[3][4],i,j,par=0,impar=0;
	
	for(i=0;i<3;i++){
		printf("Digite um numero para a linha %i \n",i);
		for(j=0;j<4;j++){
			scanf("%i",&matriz[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(matriz[i][j]%2==0)
				par++;
			else
				impar++;
		}
	}	
	
	printf("numeros pares: %i \n",par);
	printf("numeros impares: %i ",impar);
}
