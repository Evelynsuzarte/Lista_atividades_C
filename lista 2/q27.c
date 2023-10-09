#include <stdio.h>
#include <stdlib.h>

int main(){
	int hora,min,seg;
	
	printf("Digite o horario (xx horas, xx minutos, xx segundos): \n");
	scanf("%i %i %i",&hora,&min,&seg);
	
	if(hora>6 && hora<=12)
		printf("Bom dia!");
	else if(hora>12 && hora<=18)
		printf("Boa tarde!");
	else if(hora>18 && hora<24)
		printf("Boa noite!");
	else if(hora<6)
		printf("Sistema indisponivel");
		
	
}
