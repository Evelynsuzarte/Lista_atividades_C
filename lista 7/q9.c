#include <stdio.h>
#include <stdio.h>

int divisivel(int num1,int num2);

int main(){
	int n1,n2;
	
	printf("Digite dois numeros: \n");
	scanf("%i %i",&n1,&n2);
	
	
	printf("O segundo numero eh divisivel pelo primeiro? \n");
	printf("\n0 - falso \n1 - verdadeiro \n\n");
	printf("%i",divisivel(n1,n2));
	
}

int divisivel(int num1,int num2){
	int divide;
	
	if(num2%num1 == 0){
		divide = 1;
	}
	else
		divide = 0;
		
	return divide;
}

