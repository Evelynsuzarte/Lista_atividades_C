#include <stdio.h>
#include <stdlib.h>

int main(){
	int desc;
	float merc;
	float merc2;
	float total;
	
	printf("Qual o valor da mercadoria? \n");
	scanf("%f",&merc);
	printf("Qual o valor do desconto?");
	scanf("%i",&desc);
	
	total = (merc*desc)/100;
	merc2 = merc-total;
	
	printf("O desconto foi de %.2f reais. \nO valor do produto agora eh %.2f reais", total, merc2);
	
	
}
