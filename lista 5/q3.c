#include <stdio.h>
#include <stdlib.h>

int main(){
	char frase[50],letra;
	int qnt=0,pos=1,i;
	
	printf("Digite uma frase: \n");
	gets(frase);
	printf("Digite uma letra: \n");
	scanf("%c",&letra);
	
	for(i=0;i<50;i++){
		if(frase[i]==letra){
			pos = i;
			break;
		}
	}

	
	while(frase[i]!='\0'){
		i++;
		qnt++;
		
	}
	
	
	printf("Posicao da letra: %i \n",pos+1);
	printf("Quantidade de letras: %i \n",qnt-1);

}
