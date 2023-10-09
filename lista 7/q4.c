#include <stdio.h>
#include <stdlib.h>

int retangulo(int c,int l){
	int total;
	total = c*l;
	
	return total;
}

int main(){
	int comprimento, largura;
	int area;
	
	printf("Digite o comprimento: \n");
	scanf("%i",&comprimento);
	printf("Digite a largura: \n");
	scanf("%i",&largura);	
	
	area = retangulo(comprimento, largura);
	
	printf("A area do retangulo eh: %i",area);

}
