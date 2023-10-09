#include <stdio.h>
#include <stdlib.h>

int vogais(char s[]){
	int i;
	int vogais;
	
	while(s[i]!= '\0'){
		if(s[i] == 'a')
			vogais++;
		else if(s[i] == 'e')
			vogais++;
		else if(s[i] == 'i')
			vogais++;
		else if(s[i] == 'o')
			vogais++;
		else if(s[i] == 'u')
			vogais++;
	i++;
	}

	return vogais;
}

int main(){
	char frase[25];
	
	printf("Digite uma frase: \n");
	gets(frase);
	
	printf("A quantidade de vogais eh %i",vogais(frase));
}
