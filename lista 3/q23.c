#include <stdio.h>
#include <stdlib.h>

int main(){
	int qnt,idade,sexo,q1=0,q2=0,q3=0,q4=0,q5=0, masc=0,fem=0;
	float mp=0,mh=0,mm=0,porc;
	int soma=0,somam=0,somah=0;
	int i;
	
	printf("Digite o numero de pessoas que serao entrevistadas: \n");
	scanf("%i",&qnt);
	
	for(i=0;i<qnt;i++){
		printf("Qual a sua idade? \n");
		scanf("%i",&idade);
		if(idade<=15){
			soma = soma+idade;
			q1++;
		}
		else if(idade>=16 && idade<=30){
			soma = soma+idade;
			q2++;
	}
		else if(idade>=31 && idade<=45){
			soma = soma+idade;
			q3++;
		}
		else if(idade>=46 && idade<=60){
			soma = soma+idade;
			q4++;
		}
		else if(idade>60){
			soma = soma+idade;
			q5++;
		}
		printf("\nQual seu sexo?\n");
		printf("1. Feminino \n");
		printf("2. Masculino \n");
		scanf("%i",&sexo);
		if(sexo==1){
			somam=somam+idade;
			fem++;
		}
		if(sexo==2){
			somah=somah+idade;
			masc++;
		}
	}	
	
	mp = (soma/qnt);
	mm = (somam/fem);
	mh = (somah/masc);
	
	porc = ((q2*100)/soma);
	
	printf("Media de idade das pessoas: %.2f \n",mp);
	printf("Media de idade das mulheres: %.2f \n",mm);
	printf("Media de idade dos homens: %.2f \n",mh);
	printf("Quantidade de pessoas de cada faixa etaria: \n");
	printf("\t Faixa etaria 1 - ate 15 anos: %i \n",q1);
	printf("\t Faixa etaria 2 - de 16 a 30 anos: %i \n",q2);
	printf("\t Faixa etaria 3 - de 31 a 45 anos: %i \n",q3);
	printf("\t Faixa etaria 4 - de 46 a 60 anos: %i \n",q4);
	printf("\t Faixa etaria 5 - acima de 60 anos: %i \n",q5);
	printf("Porcentagem de mulheres da segunda faixa etaria: %.1f % ",porc);
	
}

