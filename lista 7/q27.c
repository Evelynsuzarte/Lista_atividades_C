#include <stdio.h>
#include <stdlib.h>

char plural(char pala[]/*,char novas[]*/){		//nao funciona
	int i;	
	
	for(i=0;i<10;i++){
		if(pala[i]=='l'){
			pala[i]='i';
			pala[i+1]='l';
		}
		else if(pala[i]=='r' || pala[i]=='s'|| pala[i]=='z'){
			pala[i]='e';
			pala[i+1]='s';
		}
		else if(pala[i]=='m'){
			pala[i]='n';
			pala[i+1]='s';
		}
		else{
			pala[i+1]='s';
		}
	}

//	for(i=0;i<10;i++){
//		novas[i]=pala[i];
//	}
	
}


int main(){
	char palavra[10];
	char nova[10];
	
	printf("Digite uma palavra: \n");
	gets(palavra);
	
	
	printf("Plural : %s \n",plural(palavra));

	
}
