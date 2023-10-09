#include <stdio.h>
#include <stdlib.h>

int main(){
	char frase[50];
	int i, contador=1;
	
	printf("Digite uma frase: \n");
	gets(frase);
	
	for(i=0;i<50;i++)
		if(frase[i]==' ')
			contador++;
			
	printf("A frase tem %i palavras",contador);

	
}
