#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	
	printf("Digite um numero: \n");
	scanf("%i",&num);
	
	if(num%2!=0 && num%3!=0)
		printf("Ele eh primo");
	else 
		printf("Ele nao eh primo");
	
		
}
