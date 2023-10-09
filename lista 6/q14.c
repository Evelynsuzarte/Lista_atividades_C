#include <stdlib.h>
#include <stdio.h>


// tentar com ponteiro
void conta(int a,int b,int *somar,int*difer,int *prod){
//	int somar,difer,prod;
	
	*somar = a + b;
	*difer = a - b;
	*prod = a * b;
	
}


int main(){
	int x,y,s,d,p;
	
	printf("Digite dois numeros: \n");
	scanf("%i %i",&x,&y);
	
    conta(x,y,&s,&d,&p);
	
	printf("Soma: %i \nDiferenca: %i \nProduto: %i",s,d,p);
	
}
