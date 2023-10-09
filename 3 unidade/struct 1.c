#include <stdio.h>
#include <stdlib.h>

int main() {
	typedef struct ler{
		char nome[50];
		char end [50];
		int telefone ;
		
	} ler;
	
	ler leitura[5];
	int i;
	
	for(i=0; i<3; i++){
		printf("Digite seu nome: \n");
		gets(leitura[i].nome);
		printf("Digite seu endereco: \n");
		gets(leitura[i].end);
		printf("Digite seu telefone: \n");
		scanf("%i", &leitura[i].telefone);
		printf("FIM!");
	}

	for(i=0; i<3; i++){
		printf("Nome: %s \n", leitura[i].nome);
		printf("Endereco: %s \n", leitura[i].end);
		printf("Telefone: %i \n", leitura[i].telefone);

}

}
