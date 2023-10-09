#include <stdio.h>
#include <stdlib.h>

int igual(char pal[]){
	int i,j;
	int palindromo;
	j=10;
	for(i=0;i<10;i++){
		while(pal[j]!='\0'){
			if(pal[i]==pal[j])
				palindromo = 1;
			else
				palindromo = 0;
		j--;	
		}
			
	}
	return palindromo;
}


int main(){
	char palavra[10];
	
	printf("Digite uma palavra: \n");
	gets(palavra);
	
	printf("A palavra é um palindromo? \n 1 = Sim\n 2 = Nao \n %i",igual(palavra));
	
}
