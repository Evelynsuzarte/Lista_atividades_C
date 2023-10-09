#include <stdio.h>
#include <stdlib.h>

int quadro(int ang){
	int posicao;
	
	if(ang>0 && ang<90){
		posicao = 1;
		printf("O quadrante eh: %i",posicao);
	}
	else if(ang>90 && ang<180){
		posicao = 2;
		printf("O quadrante eh: %i",posicao);
	}
	else if(ang>180 && ang<270){
		posicao = 3;
		printf("O quadrante eh: %i",posicao);
	}
	else if(ang>270 && ang<360){
		posicao = 4;
		printf("O quadrante eh: %i",posicao);
	}
	else if(ang == 0 || ang == 90 || ang == 180 || ang == 270){
		posicao = 0;
		printf("A linha correspondente nao reside em nenhum quadrante");
	}
	else {
		posicao = -1;
		printf("%i",posicao);
	}
	
	return posicao;
}



int main(){
	int angulo, quadrante;
	
	printf("Digite o angulo que a linha faz com o eixo positivo x: \n");
	scanf("%i",&angulo);
	
	quadrante = quadro(angulo);	
}
