#include <stdio.h>
#include <stdlib.h>

int main(){
	int curso, idade, ce=0,cc=0,cm=0,maior=0,menor=0,somae=0,somac=0,somam=0,idc,ide,idm;
	float me=0,mc=0,mm=0;
	int i;
	int nome;
	
	for(i=0;i<10;i++){
		printf("Qual a sua idade? \n");
		scanf("%i",&idade);
		printf("Qual o seu curso? \n");
		printf("1. Engenharia \n");
		printf("2. Computacao \n");
		printf("3. Matematica \n");
		scanf("%i",&curso);
		switch(curso){
			case 1:
				ce++;
				somae=somae+idade;				
				if(idade>=20 && idade<=25){
					ide++;
				}
				if(idade>maior){
					maior = idade;
					nome = 1;
				}
				break;
			case 2:
				cc++;
				somac=somac+idade;				
				if(idade>=20 && idade<=25){
					idc++;
				}	
				if(idade>maior){
					maior = idade;
					nome = 2;
				}
				break;
			case 3:
				cm++;
				somam=somam+idade;				
				if(idade>=20 && idade<=25){
					idm++;					
				}
				if(idade>maior){
					maior = idade;
					nome = 3;
				}
				break;
		}
		system("cls");
	}		// for
	
	me = (somae/ce);
	mc = (somac/cc);
	mm = (somam/cm);	
	
	printf("Quantidade de alunos: \n");
	printf("Engenharia: %i \n",ce);
	printf("Computacao: %i \n",cc);
	printf("Matematica: %i \n\n",cm);
	printf("Numero de alunos com idade entre 20 e 25 anos: \n");
	printf("Engenharia: %i \n",ide);
	printf("Computacao: %i \n",idc);
	printf("Matematica: %i \n\n",idm);
	printf("Curso com o aluno mais velho e sua idade : \n");
	printf("Curso %i : %i anos \n\n",nome,maior);
	printf("Curso com menor media de idade: \n");
	if(me<mc && me<mm)
		printf("Engenharia");
	if(mc<me && mc<mm)
		printf("Computacao");
	if(mm<me && mm<mc)
		printf("Matematica");
	
}
