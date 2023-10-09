#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,p=0,ng=0;
	int i,total;
	float mp,mn;
	
	do{
		printf("Digite um numero: \n");
		scanf("%i",&n);
		if(n>0){
			p++;
			total++;	
		}
		if(n<0){
			ng++;
			total++;
		}
	}while(n!=0);
	
	printf("%i",total);
	printf("\n%i p e %i n",p,n);
//	total = p+n;
	mp = ((p*100)/total);
	mn = ((ng*100)/total);
	
	printf("Numeros positivos : %.2f \n",mp);
	printf("Numeros negativos: %.2f",mn);
	
}
