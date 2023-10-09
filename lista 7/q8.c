#include <stdio.h>
#include <stdlib.h>

int celsius(int fah);			// n funciona

int main(){
	int f;
	float conversao;
	
	printf("Digite os graus em Fahrenheit: \n");
	scanf("%i",&f);
	
	conversao = celsius(f);
	
	printf("%i F eh %.1f",f,conversao);
}

int celsius(int fah){
	float total;
	total = ((5/9)*(fah-32));
	
	return total;
}
