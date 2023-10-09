#include <stdio.h>
#include <stdlib.h>

int main(){
	char a[20],b[20];
	int i;
	
	printf("Digite uma frase: \n");
	gets(a);
	printf("Digite uma frase: \n");
	gets(b);
	
	for(i=0;i<20;i++){
		if(a[i]==b[i])
			printf("Sao frases iguais.");
		else
			printf("Sao frases diferentes.");

	}
	
}
