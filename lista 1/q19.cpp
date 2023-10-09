#include <stdio.h>
#include <stdlib.h>

int main(){
	int km;
	float v1,v2;
	
	printf("Digite a quantidade de km a serem rodados\n");
	scanf("%i",&km);
	
	v1 = (km*1.40)+62.00;
	v2 = (km*1.20)+80.00;
	
	printf("o valor na primeira agencia eh %.1f \n",v1);
	printf("o valor na segunda agencia eh %.1f \n", v2);
	
}

