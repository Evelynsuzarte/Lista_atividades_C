#include <stdio.h>
#include <stdlib.h>

int main(){
	int n[10],i,total;
	
	printf("Digite 10 numeros: \n");
	for(i=0;i<10;i++){
		scanf("%i",&n[i]);
	}
	for(i=0;i<10;i++){
		if(n[i]%2==0 && n[i]%3==0)
			total++;
	}
	
	printf("%i numeros sao divisiveis por 2 e 3",total);
	
}
