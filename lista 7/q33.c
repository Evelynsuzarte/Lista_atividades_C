#include <stdio.h>
#include <stdlib.h>

void multiplica(int matrizz[6][4],int *novass[6][4]){
	int i,j;
	int maior= 0;
	
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			if(matrizz[i][j]>maior){
				maior = matrizz[i][j];
			}
		}
	}
	
	for(i=0;i<6;i=i+2){
		for(j=0;j<4;j++){
			(*novass[i][j] = matrizz[i][j] * maior);
			}
		}
		
	}
	

int main(){
	int matriz[6][4],nova[6][4];
	int i, j;
	
	for(i=0;i<6;i++){
		printf("Digite: \n");
		for(j=0;j<4;j++){
			scanf("%i",&matriz[i][j]);
		}
	}
	
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			printf("%i \n",&matriz[i][j]);
		}
	}

	
	multiplica(matriz,&nova);
	
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			printf("%i",&matriz[i][j]);
		}
	}

	
}
