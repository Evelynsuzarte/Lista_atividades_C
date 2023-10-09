#include <stdio.h>
#include <stdlib.h>

int main(){
	int form;
	int cent;
	int i;
	
	
	
	printf("Tabela de conversao : \n");
	printf("Centigrados \tFahrenheit \n");
	
	for(cent=32;cent>=32 && cent<=80; cent++){
		form = (9*cent/5)+32;
		printf("%i C \t\t %i F \n", cent,form );
		
	}
	
}
