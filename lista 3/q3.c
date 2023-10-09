#include <stdio.h>
#include <stdlib.h>

int main(){
	int form;
	int in, fi, inter;
	int cent;
	
	printf("Qual o valor inicial e final para fazer a conversao?\n");
	scanf("%i %i",&in,&fi);
	printf("Qual o intervalo entre os valores para conversao (de quanto em quanto) ?\n");
	scanf("%i",&inter);
	
	
	printf("\nTabela de conversao : \n");
	printf("Centigrados \tFahrenheit \n");
	
	for(cent=in;cent>=in && cent<=fi; cent=cent+inter){
		form = (9*cent/5)+32;
		printf("%i C \t\t %i F \n", cent,form );
		
	}
	
	
}
