#include <stdio.h>
#include <stdlib.h>

int main(){
	int ang;
	
	printf("Qual o angulo do triangulo?\n");
	scanf("%d",&ang);
	
	if(ang<90)
		printf("Angulo agudo");
	else if(ang>90)
		printf("Angulo obtuso");
	else(ang == 90)
		printf("Angulo reto");
	
}
