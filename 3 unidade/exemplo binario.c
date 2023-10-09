// Exexmplo de arquivo binario

#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	int vetor [10];
	int i;
	
	arq = fopen("binario.txt","wb");
	printf("Digite 10 numeros \n");
	for(i=0;i<10;i++){
		printf("Digite o numero: %i \n", i+1);
		scanf("%d",&vetor[i]);		
	}
	fwrite(vetor,sizeof(int),10,arq);
	fclose(arq);
	printf("Arquivo gravado!");

}
