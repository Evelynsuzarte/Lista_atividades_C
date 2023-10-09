#include <stdio.h>
#include <stdlib.h>

void corrida(int volta,int tempos[],int *melhortempo,int *melhorcorrida,float *mediatempo){
	int i;
	int maior = 0,menor,somatempo;
	
	for(i=0;i<volta;i++){
		if(tempos[i]>maior){
			maior = tempos[i];
		}
	}
	
	menor = maior;
	
	for(i=0;i<volta;i++){
		if(tempos[i]<menor){
			menor = tempos[i];
			*melhorcorrida = i;
		}
	}
	
	*melhortempo = menor;
	
	for(i=0;i<volta;i++){
		somatempo = somatempo+tempos[i];
		}
	
	*mediatempo = (somatempo/volta);
	
	}
	




int main(){
	int voltas, tempo[voltas];
	int melhort, melhorvolta;
	float media;
	int i;
	
	printf("Quantas voltas o piloto deu? \n");
	scanf("%i",&voltas);
	
	for(i=0;i<voltas;i++){
		printf("Digite o tempo de cada volta: \n");
		scanf("%i",&tempo[i]);
	}
	
	
	 corrida(voltas,tempo,&melhort,&melhorvolta,&media);

	
	printf("Melhor tempo: %i \n",melhort);
	printf("Melhor volta: %i \n",melhorvolta+1);
	printf("Media de tempo: %.1f \n",media);
	
	
	

}
