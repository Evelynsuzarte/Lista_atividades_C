#include <stdio.h>
#include <stdlib.h>

void extremos(int num[],int *m, int *men,int *pm,int *pmen){
	int i;
	int maior = 0,menor;
	
	for(i=0;i<15;i++){
		if(num[i]>maior){
			maior = num[i];
			*pm = i;
		}
	}
	*m = maior;
	menor = maior;
	
	for(i=0;i<15;i++){
		if(num[i]<menor){
			menor = num[i];
			*pmen = i;
		}
	}
	*men = menor;
	
}


int main(){
	int numeros[15],i;
	int maior,menor,pmaior,pmenor;
	
	printf("Digite 15 numeros: \n");
	for(i=0;i<15;i++){
		scanf("%i",&numeros[i]);
	}
	
	extremos(numeros,&maior,&menor,&pmaior,&pmenor);
	
	printf("O maior numero: %i \n",maior);
	printf("O menor numero: %i \n",menor);
	printf("A posicao do maior numero: %i \n",pmaior+1);
	printf("A posicao do menor numero: %i \n",pmenor+1);

}
