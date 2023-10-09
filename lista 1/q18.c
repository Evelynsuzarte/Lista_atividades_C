#include <stdio.h>
#include <stdlib.h>

int main(){
	float reais=0;
	float dolar = 0;
	float conv = 0;
	
	printf("Digite o valor em reais\n");
	scanf("%f",&reais);
	printf("Digite o valor da contacao do dolar\n");
	scanf("%f",&dolar);
	
	conv = reais*dolar;
	
	printf("%f em dolares eh %.2f",reais, conv);
	
}

