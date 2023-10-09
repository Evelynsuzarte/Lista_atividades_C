#include <stdio.h>
#include <stdlib.h>

int main(){
	int resp,n=0,pv=0,mv=0,total;
	float pn,ppv,pmv;
	
	do{
		printf("Qual a frequencia que voce faz exercicio? \n");
		printf("0 - Nunca \n");
		printf("1 - Poucas vezes \n");
		printf("2 - Muitas vezes \n");
		scanf("%i",&resp);
		
		if(resp==0){
			n++; total++;
		}else if(resp==1){
			pv++; total++;
		}else if(resp==2){
			mv++; total++;
		}
		
	}while(resp!=-1);
	
	pn = ((n*100)/total);
	ppv = ((pv*100)/total);
	pmv = ((mv*100)/total);
	
	printf("Resultados \n\n");
	printf("Nunca : %i ou %.2f\n",n,pn);
	printf("Poucas vezes : %i ou %.2f \n",pv,ppv);
	printf("Muitas vezes : %i ou %.2f \n",mv,pmv);
	printf("Total de entrevistados: %i",total);
	
	
	
}
