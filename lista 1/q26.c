#include <stdio.h>
#include <stdlib.h>

int main(){
	float d, diaria;
	float arr,arr2, di, dif;
	
 	printf("Valor da diaria: \n");
	scanf("%f",&d);


	diaria = (d*25)/100;
	di = d - diaria;

	arr = di*64;
	arr2 = d*40;
	
	dif = arr - arr2;
	
	printf("Valor da diaria promocional: %.2f \n",di);
	printf("Valor arrecadado com 80%: %.2f \n",arr);
	printf("Valor arrecadado com 50%: %.2f \n",arr2);
	printf("Diferença dos valores: %.2f", dif);
	

	
	
}
