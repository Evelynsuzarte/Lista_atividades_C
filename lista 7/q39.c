#include <stdio.h>
#include <stdlib.h>

void pais(int matrizp[][3],int *mais_populoso,int *estado,float *media){	
	int i,j,maior=0;
	int soma;
	
	for(i=0;i<6;i++){
		for(j=0;j<3;j++){
			if(matrizp[i][j]>maior){
				maior = matrizp[i][j];
				*estado = i;
			}
		}
	}
	*mais_populoso = maior;
	
	for(i=0;i<6;i++){
			soma = soma+matrizp[i][1];
		}
	
	*media = (soma/6);
	
}




int main(){
	int matriz[6][3];
	int i,j;
	int populoso,estado;
	float media_capital;
	
	for(i=0;i<6;i++){
		printf("Digite a populacaoo do estado numero %i: \n",i+1);
		for(j=0;j<3;j++){
			printf("Municipio %i: \n",j+1);
			scanf("%i",&matriz[i][j]);
		}
	}
	
	pais(matriz,&populoso,&estado,&media_capital);

	
	printf("\nMunicipio mais populoso tem %i habitantes, seu estado eh o de numero %i \n",populoso,estado);
	printf("Media de habitantes das capitais: %.1f",media_capital);
}
