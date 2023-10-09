#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y){
	int i, resultado;
	
	for (i=x;i<=y;i++){
		resultado = resultado + i;
	}
	
	return resultado-1;
}



int main(){
	int n1,n2;
	int total;
	
	printf("Digite dois numeros: \n");
	scanf("%i %i",&n1,&n2);
	
	if(n1<n2){
		total = soma(n1,n2);
		printf ("O resultado eh: %i",total);
	}
	else
		printf("O primeiro numero eh maior que o segundo.");
	
	
}
