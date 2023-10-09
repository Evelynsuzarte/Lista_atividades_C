#include <stdio.h>
#include <stdio.h>

int potencia(int b,int e){
	int i,total;
	
	total = b;
	
	for(i=1;i<e;i++){
		total = total*b;
	}
	
	return total;
}



int main(){
	int base,expoente;
	
	printf("Digite dois numeros: \n");
	scanf("%i %i",&base,&expoente);
	
	printf("%i elevado a %i = %i",base,expoente,potencia(base,expoente));
}
