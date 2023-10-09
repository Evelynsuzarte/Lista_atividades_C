#include <stdio.h>
#include <stdlib.h>

int conta(int a,int b,char c){
	float total;
	
	if(c == '+'){
		total = a + b;
	}
	else if(c == '-'){
		total = a - b;
	}
	else if(c == '*'){
		total = a * b;
	}
	else if(c == '/'){
		total = a / b;
		if(total == 0){
			printf("O numero informado nao tem solucao");
		}
	}
	
	return total;
}


int main(){
	char caract;
	int x,y;
	float resultado;
	
	printf("Digite a conta que deseja calcular, apertando enter apos cada caractere: \n");
	scanf("%i %c %i",&x,&caract,&y);
	
	resultado = conta(x,y,caract);
	
	printf("O resultado eh : %.1f",resultado);
	
}
