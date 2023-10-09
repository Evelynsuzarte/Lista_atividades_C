#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[4][3],soma,i,j,qnt;
	float media;
	
	for(i=0;i<4;i++){
		printf("Digite:\n");
		for(j=0;j<3;i++){
			scanf("%i",&matriz[i][j]);
		}
	}
	
	
	for(i=0;i<4;i++){
		for(j=0;j<3;i=i+2){
			qnt++;
			soma = soma + matriz[i][j];
		}
	}
	
	media = soma/qnt;
	
	printf("Media: %.2f",media);
	
	
}
