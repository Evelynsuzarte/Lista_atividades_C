#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	int lim, i;
	
	printf("Digite ate onde voce deseja saber quais numeros sao primos: \n");
	scanf("%i",&lim);
	
	
	for(i=1; i<=lim; i++){
		if(i%2!=0 && i%3!=0)
			printf("%i eh primo\n",i);	
	}
	
}
