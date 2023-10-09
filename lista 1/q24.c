#include <stdio.h>
#include <stdlib.h>

int main(){
	int anos, mes, dias,a,m,total;
		
	printf("Digite sua idade : \nAnos: \n");
	scanf("%i",&anos);
	printf("Mes: \n");
	scanf("%i",&mes);
	printf("Dias: \n");
	scanf("%i",&dias);
	
	a = anos*365;
	m = mes*30;
	total = a + m + dias;
	
	printf ("Voce viveu: %i dias", total);
	
	
}
