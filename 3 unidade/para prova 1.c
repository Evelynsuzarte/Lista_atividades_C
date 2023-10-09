/* Crie um programa que controle o fluxo de carros em um estacionamento. Cada carro possui uma
placa, nome, hora de entrada (inteiro), hora de saída (inteiro), valor à pagar. O valor a pagar é
calculado com base na hora de entrada e na hora de saída. Caso o carro entre e saia antes de
completar 1 hora, o cliente não paga e para cada hora o cliente paga 3 reais. Guarde esses dados em
uma lista encadeada que insere no início. Sempre que um carro sair, remova-o da lista. */

#include <stdio.h>
#include <stdlib.h>

typedef struct carros{
	char placa;
	char nome[50];
	int entrada;
	int saida;
	float pagar;
	int conteudo;	
	struct cel *proximo;
	
} celula;
	

int main(){
	int menu;
	int voltar;
	celula c;
	celula *nova;
	int x=56;
	celula *p = NULL; 
	
while(voltar==0){
	printf("ESTACIONAMENTO 24 HORAS \n\n");
	printf("<1> Registrar carro \n");
	printf("<2> Valor a pagar\n");
	printf("<3> Sair\n");
	scanf("%i",&menu);
	switch(menu){
		case 1:
	
			if(p==NULL){
				p = (celula*) malloc (sizeof (celula));
				p->conteudo = x;
				p->proximo = NULL;
				printf("vazio");
			}
			else{
				p = (celula*) malloc (sizeof (celula));
				p->conteudo = x;
				p->proximo=NULL;
	
				nova = (celula *) malloc (sizeof (celula));
				nova->conteudo = x;
				nova->proximo = p;
				p = nova;
				
				printf("REGISTRE UM CARRO \n");
				printf("PLACA DO CARRO:\n>>");
				scanf("%c",&c.placa);
				printf("NOME DO PROPRIETARIO \n");
				gets(c.nome);
				printf("HORARIO DE ENTRADA \n");
				scanf("%i",&c.entrada);
				printf("HORARIO DE SAIDA \n");
				scanf("%i",&c.saida);
			
				printf("Digite 0 para voltar \n >>");
				scanf("%i",&voltar);	
			}
			
	
			
		
		
	}

}	
	
	
	
}
