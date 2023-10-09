#include <stdio.h>
#include <stdlib.h>

int main(){
	int A[5],B[5];
	int i, menor, div,aux;
	
	printf("Preencha o vetor A: \n");
	for(i=0;i<5;i++){
		scanf("%i",&A[i]);
	}
	printf("Preencha o vetor B: \n");
	for(i=0;i<5;i++){
		scanf("%i",&B[i]);
	}
	
	// menor numero de B;
	
	for(i=0;i<5;i++){
		if(B[i]>aux){
			aux = B[i];
			if(B[i]<aux){
				menor = B[i];
			}
		}
	}
	printf("%i",menor);
	
	for(i=0;i<5;i++){ 			
		div = (A[i]/menor);
		A[i] = div;	
	}
	
	for(i=0;i<5;i++){
		printf("%i \n",	A[i]);
	
	
}
}
