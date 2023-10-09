#include <stdio.h>
#include <stdlib.h>

int main(){
	char a[30],b[30];		// n consegui
	int pos,i,x;
	
	printf("Digite uma frase: \n");
	gets(a);
	printf("Digite uma frase: \n");
	gets(b);
	printf("Digite uma posicao: \n");
	scanf("%i",&pos);
	
	for(i=0;i<=pos;i++){
		if(pos<=0){
			while(b[x]!='\0'){
				a[0]=b[x];
				i++;
			}
		}
		else{
			while(b[x]!='\0'){
			a[i]=b[x];
		}
	}
	}
	
	puts(a);
	
	
	

	}

