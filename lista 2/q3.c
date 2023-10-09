#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c;
	
	printf("Digite os lados: \n");
	scanf("%i %i %i",&a,&b,&c);
	
	if(a<b+c && b<a+c && c<a+b)
		printf("Pode existir");
	else
		printf("Nao pode");
	
}
