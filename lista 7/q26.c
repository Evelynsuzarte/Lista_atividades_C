#include <stdio.h>
#include <stdlib.h>

int repetidas(char s[]){
	int i;
	int contador=0; 
	
	for(i=0;i<25;i++){
		if(s[i]==s[i+1])
			contador++;
	}
	return contador;
}


int main(){
	char frase[25];
	
	printf("Digite uma frase: \n");
	gets(frase);
	
	printf("A quantidade de duplas de letras repetidas eh %i",repetidas(frase));
}
