#include <stdio.h>
#include <stdlib.h>

int contador(char t[]){
	int i;
	int cont;
	
	for(i=0;i<350;i++){
		if(t[i]=='.')
			cont++;	
		else if(t[i]=='?')
			cont++;
		else if(t[i]=='!')
			cont++;
	}
	
	return cont;
}


int main(){
	char texto[350];
	int qnt;
	
	printf("Digite um texto : \n");
	gets(texto);
	
	qnt = contador(texto);
	
	printf("O texto tem %i frases.",qnt);
}
