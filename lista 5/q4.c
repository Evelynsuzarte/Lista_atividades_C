#include <stdio.h>
#include <stdlib.h>

int main(){
	char frase[50];
	int i;
	
	printf("Digite uma frase: \n");
	gets(frase);
	
	for(i=0;i<50;i++){
		if(frase[i]==' ');
			frase[i]=frase[i+1];		//n consegui
	}
	
	printf("Nova: \n");
	puts(frase);
}
