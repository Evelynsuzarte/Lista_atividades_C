/* Um cliente em um banco � representado por:

N�mero da conta - um n�mero inteiro; N�mero da ag�ncia - um n�mero inteiro; Saldo.

Escreva um programa que defina um registro capaz de armazenar
um cliente do banco. Seu programa deve ler os dados de n00
clientes e armazen�-los em um vetor, em seguida seu
programa deve chamar uma fun��o para calcular a m�dia dos
saldos dos clientes, encontrar o n�mero da conta e da ag�ncia
do cliente com maior saldo e a conta e a ag�ncia do cliente
com menor saldo. Al�m disso, deve calcular a porcentagem
de clientes com saldo inferior a R$1000,00. Todas as
respostas devem ser impressas pela fun��o principal. 	*/

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
	printf("O MAIOR SALDO � %d \n Conta: %d \tAgencia: %d \n", maior, contam ,agm);
	printf("O MENOR SALDO � %d \n Conta: %d \tAgencia: %d \n", menor,contamer, agmer);
	
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
 	printf("A media de saldo � %1.f \n",media);
 	
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
 
