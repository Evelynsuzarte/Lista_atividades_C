#include <stdio.h>
#include <stdlib.h>

int main(){
	char frase[30];
	int a=0,e=0,i=0,o=0,u=0,x;
	
	printf("Digite uma frase: \n");
	gets(frase);
	
	for(x=0;x<30;x++){
		if(frase[x]=='a')
			a++;
		else if(frase[x]=='e')
			e++;	
		else if(frase[x]=='i')
			i++;	
		else if(frase[x]=='o')
			o++;	
		else if(frase[x]=='u')
			u++;			
	}
	
	printf("A letra a apareceu %i vez(es)\n",a);
	printf("A letra e apareceu %i vez(es)\n",e);
	printf("A letra i apareceu %i vez(es)\n",i);
	printf("A letra o apareceu %i vez(es)\n",o);
	printf("A letra u apareceu %i vez(es)\n",u);

	
}
