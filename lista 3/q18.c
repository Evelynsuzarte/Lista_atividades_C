#include <stdio.h>
#include <stdlib.h>

int main(){
	int qnt,tipo,i;
	float mr=0,mc=0,mi=0;
	int sr=0,sc=0,si=0;
	int cr=0,cc=0,ci=0;
	
	// para 10 consumidores
	
	for(i=0; i<10; i++){
		printf("Que tipo de consumidor voce eh? \n");
		printf("1. Residencial \n");
		printf("2. Comercial \n");
		printf("3. Industiral \n");
		scanf("%i",&tipo);
		switch(tipo){
			case 1:
				printf("Quantidade kWh consumidos durante o mes??\n");
				scanf("%i",&qnt);
				cr++;
				sr = sr + qnt;	
				break;
			case 2:
				printf("Quantidade kWh consumidos durante o mes??\n");
				scanf("%i",&qnt);
				cc++;
				sc = sc + qnt;	
				break;
			case 3:
				printf("Quantidade kWh consumidos durante o mes??\n");
				scanf("%i",&qnt);
				ci++;
				si = si + qnt;	
				break;
		}	
	system("cls");
	}
	
	mr = sr/cr;
	mc = sc/cc;
	mi = si/ci;
	
	printf("Tabela de consumo: \n");
	printf("\nMedia de consumo: \nResidencial \t Comercial \t Industrial \n");
	printf("%.2f \t\t %.2f \t %.2f \n",mr,mc,mi);
	printf("Total de consumo: \nResidencial \t Comercial \t Industrial \n");
	printf("%i \t\t %i \t\t %i \n",sr,sc,si);
	
	
	
}
