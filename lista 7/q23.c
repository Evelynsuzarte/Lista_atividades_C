#include <stdio.h>
#include <stdlib.h>

void max(int matriz1[][3], int *kk, int *linha, int *coluna){
	int i,j;
	int maior=0;

	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			if(matriz1[i][j]>maior){
				maior = matriz1[i][j];
				*linha = i;
				*coluna = j;
			}			
		}
	}
	*kk = maior;
	

}

int main(){
	int i,j,matriz[4][3];
	int k,lin,col;
	
	for(i=0;i<4;i++){
		printf("Digite: \n");
		for(j=0;j<3;j++){
			scanf("%i",&matriz[i][j]);
		}
	}
	
	max(matriz,&k,&lin,&col);
	
	printf("k = %i \nlin = %i\ncol = %i",k,lin+1,col+1);
}
