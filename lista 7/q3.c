#include <stdio.h>
#include <stdlib.h>

int alqueire(int a,char l){
	int convertido;
	
	if(l == 'p'){
		convertido = a *24200;
	}
	else if(l == 'm'){
		convertido = a*48400;
	}
	else if(l == 'b'){
		convertido = a*96800;
	}
	
	return convertido;
}


int main(){
	int area;
	char letra;
	int tamanho;
	
	printf("Digite um numero:\n");
	scanf("%i",&area);
	fflush(stdin);
	printf("Digite em que tipo de alqueire quer ver: \n");
	printf("p - paulista \nm - mineiro\nb -baiano\n");
	scanf("%c",&letra);
	
	tamanho = alqueire(area,letra);
	
	printf("%i alqueires equivale a %i metros quadrados",area,tamanho);	
}

