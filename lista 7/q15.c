#include <stdio.h>
#include <stdlib.h>

void liquido(int cup,int *pin,int *quar,int *gal){
	int i;
	int total,totalpin;
	
	total = cup;
	for(i=0;i<cup;i=i+16){
		(*gal)++;	
		}
	
	for(i=0;i<cup;i=i+4){
		(*quar)++;	
		}
	
	for(i=0;i<cup;i=i+2){
		(*pin)++;	
		}
	
	}



int main(){
	int copos;
	int pint,quarto,galao;
	
	printf("Digite a quantidade de copos: \n");
	scanf("%i",&copos);
	
	liquido(copos,&pint,&quarto,&galao);
	
	printf("\nQuantidade correspondente: %i pint(s)\n%i quarto(s)\n%i galao(oes)",pint-1,quarto,galao-1);
}
