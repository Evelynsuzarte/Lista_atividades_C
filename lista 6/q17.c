#include <stdio.h>
#include <stdlib.h>

void numeros(int vetor[],int tamanho,int *mai,int *men,int *soma_m,int *soma_meno){
	int j;
	
	*mai = 0;
	for(j=0;j<tamanho;j++){
		if(vetor[j]>*mai)
			*mai = vetor[j];
	}
	
	*men = *mai;
	
	for(j=0;j<tamanho;j++){
		if(vetor[j]<*men)
			*men = vetor[j];
	}
	
	for(j=0;j<tamanho;j++){
		if(j%2 == 0){
			*soma_m = *mai + j;
		}
		else if(j%2 != 0){
			*soma_meno = *men + j;
		}
	}
	
}

int main(){
	int i,tam, v[tam];
	int maior,menor,soma_maior,soma_menor;
	
	printf("Qual o tamanho do vetor: \n");
	scanf("%i",&tam);
		
	printf("Digite 10 numeros: \n");
	for(i=tam;i<tam;i++){
		scanf("%i",&v[i]);
	}
	
	numeros(v[tam],tam,&maior,&menor,&soma_maior,&soma_menor);
	
	printf("O maior numero eh: %i \n",maior);
	printf("O menor numero eh: %i \n",menor);
	printf("A soma do indice par: %i \n",soma_maior);
	printf("A soma do indice menor: %i",soma_menor);

	
	
}
