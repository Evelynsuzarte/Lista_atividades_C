#include <stdio.h>
#include <stdlib.h>

void intervalo(char pal[],int ini,int f, char novas[]){
	int i,j;
	
	while(novas[j]!='\0'){
		novas[j] = pal[i];
		j++;
	}
}



int main(){
	char palavra[20], nova[20];
	int final,inicial;
	
	printf("Digite um palavra: \n");
	gets(palavra);
	printf("Digite um intervalo de 0 a 20: \n");
	scanf("%i %i",&inicial,&final);
	
	intervalo(palavra,inicial,final,nova);
	
	printf("Nova: \n");
	puts(nova);
	
}
