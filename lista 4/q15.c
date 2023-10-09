#include <stdio.h>
#include <stdlib.h>

int main(){
	float nota[10][5];
	int i,j;
	float maior=0, menor=0, media, soma;
	
	for(i=0;i<10;i++){
		printf("Digite a nota do aluno %i \n",i);
		for(j=0;j<5;j++){
			scanf("%f",&nota[i][j]);	
		}
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<5;j++){
			if(nota[i][j]>maior)
			maior = nota[i][j];
		}
	}
		
	for(i=0;i<10;i++){
		for(j=0;j<5;j++){
			soma = soma + nota[i][j];
		}
	}
	
	media = (soma/10);

	menor = maior;
	for(i=0;i<10;i++){
		for(j=0;j<5;j++){
			if(nota[i][j]<menor)
				menor = nota[i][j];
		}
	}
	
	
	printf("Nota dos alunos: \n");
	for(i=0;i<10;i++){
		printf("Aluno %i : %i \n",i);

		for(j=0;j<5;j++){
			printf("Aluno %i : %.2f \t",i,nota[i][j]);
		}
		printf("\n");
	}
	printf("Media de notas: %.2f \n",media);
	printf("Maior nota: %.2f \n",maior);
	printf("Menor nota: %.2f \n",menor);
	
	
	
}
