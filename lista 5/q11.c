#include <stdio.h>
#include <stdlib.h>

int main(){
	char frase[30];
	int virg=0,pont=0,inter=0,exc=0,i;
	
	printf("Digite uma frase: \n");
	gets(frase);
	
	while(frase[i]!='\0'){
		if(frase[i]=='.')
			pont++;
		else if(frase[i]==',')
			virg++;
		else if(frase[i]=='!')
			exc++;
		else if(frase[i]=='?'){
			inter++;

		}
			
		i++;
	}
	
	printf("Sinais de pontuacao: \n");
	printf(". = %i \n",pont);
	printf(", = %i \n",virg);
	printf("? = %i \n",inter);
	printf("! = %i \n",exc);

}
