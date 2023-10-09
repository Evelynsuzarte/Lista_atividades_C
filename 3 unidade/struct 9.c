/*Faca um programa que leia os dados de Q alunos (Nome, matricula, Media Final), arma- ´
zenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores,
o vetor dos aprovados e o vetor dos reprovados, considerando a media m ´ ´inima para a
aprovac¸ao como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos ˜
dados do vetor de reprovados.*/

#include <stdio.h>
#include <stdlib.h>
#define Q 5

int main() {
	typedef struct alunos{
		char nome[100];
		int matricula;
		float mediaf;	
	} alunos;
	
	alunos perfil[Q];
	alunos aprovados[Q];
	alunos reprovados [Q];
	int i;
	int num=1;
	int cont_ap = 0;
	int cont_rp = 0;
	
	for(i = 0; i<Q; i++){					// olhar aqui
		printf("Aluno numero %d \n\n", num);
		printf("Digite o nome: \n");
	//	scanf("%s", &perfil[i].nome);
						gets(perfil[i].nome);
		fflush(stdin);
		printf("Digite a matricula\n");
		scanf("%d",&perfil[i].matricula);
		fflush(stdin);

		printf("Digite sua media\n");
		scanf("%f",&perfil[i].mediaf);
		
		fflush(stdin);
		num++;
	
	}

	for(i = 0; i<Q; i++){
		if (perfil[i].mediaf>5.0){
			aprovados[i] = perfil[i];
			cont_ap++;
		}
		else {
			reprovados[i] = perfil[i];
			cont_rp++;	
		}
			

	}

	printf("APROVADOS:\n");
	for(i = 0; i<cont_ap; i++){
		puts(aprovados[i].nome);
		printf("%d", aprovados[i].matricula);
		printf("%f", aprovados[i].mediaf);
	}
	
	printf("\n REPROVADOS:\n");
	for(i = 0; i<cont_rp; i++){
		puts(reprovados[i].nome);
		printf("%d", reprovados[i].matricula);
		printf("%f", reprovados[i].mediaf);
	}

}



