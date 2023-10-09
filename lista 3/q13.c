#include <stdio.h>
#include <stdlib.h>

int main(){				// N CONSEGUI
	int x[5], aux;
	int i, soma,contador;
	float media;
	
	printf("Digite numeros ate q a soma seja no minimo 100: \n");
	
	while(soma==100){
		scanf("%i",&x[i]);	
		aux = x[i];
		soma = soma + aux;
		contador++;	
	
	
	i++;
	}	
		if(soma==100){
			media = soma/contador;
	}
	
	printf("Foram lidos %i numeros.\nA media foi de %i.",contador,media);	


}

