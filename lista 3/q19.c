#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i;
	int soma;
	
	printf("Digite um numero \n");
	scanf("%i",&n);
	
	for(i=0;i<n; i++){
		if(n%i==0){		// n funciona aq
			soma = soma + i;
		}
	}	
		
		if(soma == n){
			printf("%i eh um numero perfeito",n);
		}
		else 
			printf("%i nao eh um numero perfeito",n	);


}
