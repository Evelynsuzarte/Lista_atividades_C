#include <stdio.h>
#include <stdlib.h>

int conta(int numero){
	int i,total;
	
	for(i=0;i<numero;i++){
		if(i*i == numero)
			total = i;
	}
	return total;
}


int main(){
	int n,raiz;
	
	printf("Digite um numero:\n");
	scanf("%i",&n);
	
	raiz = conta(n);
	
	printf("A raiz de %i eh %i",n,raiz);
}
