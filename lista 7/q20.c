#include <stdio.h>
#include <stdlib.h>

int iguais(int m1[][3],int m2[][3]){
	int i,j,iguais;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(m1[i][j] == m2[i][j])
				iguais = 1;
			else 
				iguais = 0;
		}
	}
	
	return iguais;
}

int main(){
	int i,j;
	int matriz1[3][3],matriz2[3][3];
	
	for(i=0;i<3;i++){
		printf("Digite para matriz 1:\n");
		for(j=0;j<3;j++){
			scanf("%i",&matriz1[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		printf("Digite para matriz 2:\n");
		for(j=0;j<3;j++){
			scanf("%i",&matriz2[i][j]);
		}
	}
	
	
	printf("Sao iguais ou nao? \n 1 - Sim\n 0 - Não \n%i",iguais(matriz1,matriz2));
	
	
	
}
