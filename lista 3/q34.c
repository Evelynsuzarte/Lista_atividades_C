#include <stdio.h>
#include <stdlib.h>

int main(){
	char lugar,comida,dia;
	int p=0,h=0,c=0,f=0,s=0,d=0,m=0,op;
	
	do{									// erro com os scanfs
		printf("Escolha o lugar para a festa: \n");
		printf("p - Praia \nh - Hotel \n");
		scanf("%c",&lugar);
		if(lugar=='p')
			p++;
		else if(lugar=='h'){
			h++;

		}
		
		fflush(stdin);

		printf("Escolha o tipo de comida: \n");
		printf("c - churrasco \nf - Feijoada\nm - Massa \n");
		scanf("%c",&comida);
		if(comida=='c')
			c++;
		else if(comida=='f')
			f++;
		else if(comida=='m')
			m++;
			
		fflush(stdin);
			
		printf("Escolha o dia preferido: \n");
		printf("s - sabado \nd - domingo \n");
		scanf("%c",&dia);
		if(dia == 's')
			s++;
		else if(dia == 'd'){
			d++;
		}
			
		fflush(stdin);
		
		printf("\nDeseja continuar?\n");
		printf("1 . Sim \n2. Nao \n");
		scanf("%i",&op);
		if(op==2)
			break;
	}while(op==1);
	
	printf("Resultados \n\n");
	
	if(p>h)
		printf("O lugar escolhido foi a praia \n");
	else 
		printf("O lugar escolhido foi o hotel \n");
		
	if(c>f && c>m)
		printf("A comida escolhida foi churrasco \n");
	else if(f>c && f>m)
		printf("A comida escolhida foi feijoada \n");
	else if(m>c && m>f)
		printf("A comida escolhida foi massa \n");
	
	if(s>d)
		printf("O dia escolhido foi sabado");
	else 
		printf("O dia escolhido foi domingo");
	
}
