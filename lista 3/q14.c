#include <stdio.h>
#include <stdlib.h>

int main(){				// nao consegui 
	float nota[100];
	int i, contador;
	
	printf("Digite a nota de cada aluno: \n");
		
//	while(nota[i]<0 && nota[i]>10){
		
//		i++;
//	}	
	
	for(i=0;i<100;i++){
		scanf("%i",&nota[i]);	
		contador++;	
			if(nota[i]<0 && nota[i]>10)
				break;
	}
	
	
	for(i=0;i<contador;i++){
		if(nota[i]>=7)
			printf("Aluno %i : Aprovado \n",i);
		else if(nota[i]>=4)
			printf("Aluno %i : Em exame \n",i);
		else if(nota[i]<4)
			printf("Aluno %i : Reprovado \n",i);
	}
	

}

