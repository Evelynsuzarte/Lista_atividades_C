#include <stdio.h>
#include <stdlib.h>

int main(){
	float nota;
	
	printf("Qual sua nota?\n");
	scanf("%f",&nota);
	
	if(nota>=9.0)
		printf("Conceito A");
	else if(nota<9.0 && nota>=8.0)
		printf("Conceito B");
	else if(nota<8.0 && nota>=7.0)
		printf("Conceito C");
	else if(nota<7.0 && nota>=6.0)
		printf("Conceito D");
	else if(nota<6.0)
		printf("Conceito F");


	
}
