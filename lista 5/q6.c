#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome[25],abrv[25];
	int i;
	
	printf("Digite seu nome: \n");
	gets(nome);
	
	while(nome[i]!='\0'){
		abrv[i] = nome[i];
		if(nome[i]==' '){
			abrv[i] = nome[i];
		}
		
		i++;
	}	
	
	puts(nome);
	puts(abrv);	
	
}
