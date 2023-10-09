#include <stdio.h>
#include <stdlib.h>

void semelhante(int aa[3][3],int bb[3][3],int *s){
	int w,z;
	
	for(w=0;w<3;w++){
		for(z=0;z<3;z++){
			if(aa[w][z] == bb[w][z])
				return 1;
			if(aa[w][z] != bb[w][z])
				return 0;
		}
	}
	
}

int main(){
	int a[3][3],b[3][3];
	int i,j;
	int semel,suco;
	
	printf("Digite uns numeros para a matriz 1 \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%i",&a[i][j]);
		}
	}
	printf("Digite uns numeros para a matriz 2\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%i",&b[i][j]);
		}
	}	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				semel = semelhante(a[i][j],b[i][j],&suco);

		}
	}
	
	//semel = semelhante(a[3][3],b[3][3]);
	
	if(semel == 1)
		printf("As matrizes sao iguais");
	else if(semel == 0)
		printf("As matrizes sao diferentes");
	
}
