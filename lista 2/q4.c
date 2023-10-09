#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y;
	
	printf("Digite dois numeros: \n");
	scanf("%i %i",&x,&y);
	
	if(x<y)
		printf("%i eh o menor",x);
	else
		printf("%i eh o menor",y);
	
}
