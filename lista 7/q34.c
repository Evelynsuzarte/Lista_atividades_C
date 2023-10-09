#include <stdio.h>
#include <stdlib.h>

void linha(int matrizz[][5],int *menor_num[]){
	int menor,maior; 
	int i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(matrizz[i][j]>maior){
				maior = matrizz[i][j];
			}
		}
	}
	
	menor = maior; 
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(matrizz[i][j]<menor){
				*menor_num[i] = matrizz[i][j];
			}
		}
	}
	
	
}



int main(){
	int matriz[5][5],menor[5];
	int i, j;
	
	for(i=0;i<5;i++){
		printf("Digite: \n");
		for(j=0;j<5;j++){
			scanf("%i",&matriz[i][j]);
		}
}
	linha(matriz,&menor);
	
	printf("Os menores numeros: \n");
	for(j=0;j<5;j++){
			scanf("%i\n",&menor[i]);
		}

}
