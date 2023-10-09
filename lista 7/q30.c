#include <stdio.h>
#include <stdlib.h>

void codigo(char frasef[],char *novaf[]){
	int i;
	
	for(i=0;i<50;i++){
		*novaf[i] = frasef[i];
		
		if(frasef[i]=='z'){
			*novaf[i] = 'p';
		}
		else if(frasef[i]=='e'){
			*novaf[i] = 'o';
		}
		else if(frasef[i]=='n'){
			*novaf[i] = 'l';
		}
		else if(frasef[i]=='i'){
			*novaf[i] = 'a';
		}
		else if(frasef[i]=='t'){
			*novaf[i] = 'r';
		}
	}
	return;
}



int main(){
	char frase[50];
	char nova[50];
	
	printf("Digite uma frase: \n");
	gets(frase);
	
	codigo(frase,nova);
	
	puts(frase);
	printf("\n");
	puts(nova);
	
}
