/* Um cliente em um banco é representado por:

Número da conta - um número inteiro; Número da agência - um número inteiro; Saldo.

Escreva um programa que defina um registro capaz de armazenar
um cliente do banco. Seu programa deve ler os dados de n00
clientes e armazená-los em um vetor, em seguida seu
programa deve chamar uma função para calcular a média dos
saldos dos clientes, encontrar o número da conta e da agência
do cliente com maior saldo e a conta e a agência do cliente
com menor saldo. Além disso, deve calcular a porcentagem
de clientes com saldo inferior a R$1000,00. Todas as
respostas devem ser impressas pela função principal. 	*/

#include <stdio.h>
#include <stdlib.h>
#define n 3

typedef struct banco{
	int conta;
	int agencia;
	int saldo;
	
} banco;
banco cliente [n];

void msaldo(){
	int i, menu;
	int contam, agm, contamer, agmer;
	int maior = 0 , menor = 0;
	for(i=0;i<n;i++){
		if(cliente[i].saldo>maior){
			maior = cliente[i].saldo;
			agm = cliente[i].agencia;
			contam = cliente[i].conta;			
		}
		else(cliente[i].saldo<menor);{
			menor = cliente[i].saldo;
			agmer = cliente[i].agencia;
			contamer = cliente[i].conta;
		}
	}
	printf("O MAIOR SALDO É %d \n Conta: %d \tAgencia: %d \n", maior, contam ,agm);
	printf("O MENOR SALDO É %d \n Conta: %d \tAgencia: %d \n", menor,contamer, agmer);
	
//	printf("Digite 0 para voltar ao menu \n");
//	scanf("%d", menu);
//	if(menu==0)
//		main();

}

 void mediasaldo(){
 	int menu;
 	float media;
 	int i, aux;
 	for (i=0;i<n;i++){
 		aux = aux + cliente[i].saldo;	
	 }
	media = aux/n;
 	printf("A media de saldo é %1.f \n",media);
 	
 //	printf("Digite 0 para voltar ao menu \n");
//	scanf("%d", menu);
//	if(menu==0)
//		main();
 }
 
 void registrar(){
 	int i, menu;
	 for(i=0;i<n;i++){
		printf("BANCO \n\n");
	 	printf("Digite sua conta: \n>>");
	 	scanf("%i",&cliente[i].conta);
	 	printf("Digite sua agencia: \n>>");
	 	scanf("%i",&cliente[i].agencia);
	 	printf("Digite seu saldo: \n>>");
	 	scanf("%i",&cliente[i].saldo);
		system("cls");
		}
//	printf("Digite 0 para voltar ao menu \n");
//	scanf("%d", menu);
//	if(menu==0){
//		main();
	}
		
 
 
 
 int main(){
 	int menu;
 	int media_saldo;
 for(;;){
 	printf("MENU \n");
 	printf("1. Registrar \n");
 	printf("2. Media de saldo \n");
 	printf("3. Maior e menos saldo \n");
 	scanf("%d",&menu);
 	system("cls");
 	switch(menu){
 		case 1:
 			registrar();
 			break;
 		case 2:
		 	mediasaldo();
		 	break;
		case 3:
			msaldo();
			break;
 		
	 }
}
	
 
 }
 
