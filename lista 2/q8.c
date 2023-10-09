#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	int r;
	
	printf("Digite um numero entre 1 e 4:\n");
	scanf("%i",&x);
	
	
	printf("Esse numero eh maior que 2? 1 - sim ou 2 - nao\n");
	scanf("%i",&r);
	
	if(r==1){
		printf("Eh maior que 3?  1 - sim ou 2 - nao\n");
		scanf("%i",&r);
		if(r==1)
			printf("O numero que vc pensou foi 4");
		if(r==2)
			printf("O numero que vc pensou foi 3");

	}
	else if(r==2){
		printf("Eh maior que 1?  1 - sim ou 2 - nao\n");
		scanf("%i",&r);
			if(r==1)
			printf("O numero que vc pensou foi 2");
			if(r==2)
			printf("O numero que vc pensou foi 1");
		
	}
	
	

	
}
