#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1, num2, mult, mult2;
	int i;
	
	printf("Digite dois numeros inteiros positivos : \n");
	scanf("%i %i",&num1,&num2);
	
	printf("Os multiplos de %d eh :\n",num1);
	mult = num1;
	for(i = 0; i < 7; i++){
		printf("%i \n",mult);
		mult = mult + num1;
	}
	
	printf("\n Os multiplos de %d eh :\n",num1);
	mult2 = num2;
	for(i = 0; i < 7; i++){
		printf("%i \n",mult2);
		mult2 = mult2 + num2;
	}
	
	
	
}
