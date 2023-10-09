#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[4][4],i,j,mult[4][4];
	int n;
	
	for(i=0;i<4;i++){
		printf("Digite: \n");
		for(j=0;j<4;j++){
			scanf("%i",&matriz[i][j]);
		}
	}
	
	printf("Deseja multiplicar por qual numero? \n");
	scanf("%i",&n);
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			mult[i][j] = (matriz[i][j]*n);
		}
	}
	
	printf("Total: \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%i \t",mult[i][j]);
		}
	printf("\n");
	}
}
