#include <stdio.h>
#include <stdlib.h>

int main(){
	char frase[50],inv[50];
	int i,j;
	
	printf("Digite uma frase: \n");
	gets(frase);
	
	while(frase[i]!='\0'){
	for(j=50;j>=50;j--){
			inv[j] = frase[i];
		
	}
		i++;
	}
	
	
	/*
	for(i=50;i>=50;i--){
		for(j=0;j<50;j++){
			inv[j] = frase[i];
		}
	}
	*/
	
	printf("Antiga: \n");
	puts(frase);
	printf("Nova: \n"); 		//nao consigo inverter
	puts(inv);
}
