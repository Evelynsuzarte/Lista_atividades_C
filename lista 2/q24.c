#include <stdio.h>
#include <stdlib.h>

int main(){
	int dist;
	float conta;
	
	printf("Digite a distancia: \n");
	scanf("%d",&dist);
	
	if(0<=dist<=3){
		conta = 4+(dist*0.50);
		printf("Voce pagara: R$ %.2f",conta);
	}
	else if(3<dist<=6){
		conta = 4+(dist*0.75);
		printf("Voce pagara: R$ %.2f",conta);
	}
	else if (dist>6){
		conta = 4+(dist*1.00);
		printf("Voce pagara: R$ %.2f",conta);
	}
		
}
