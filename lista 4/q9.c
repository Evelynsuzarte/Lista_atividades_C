#include <stdio.h>
#include <stdlib.h>

int main(){
	int v[10],a[10],b[10];
	int i,par=0,impar=0;
	
	printf("Digite 10 numeros : \n");
	for(i=0;i<10;i++){
		scanf("%i",&v[i]);
	}

	for(i=0;i<10;i++){
		if(v[i]%2==0){
			par++;
			a[i]=v[i];
		}
		else{
			impar++;
			b[i]=v[i];
		}	
	}
	
	printf("\nNumeros pares: \n");
	for(i=0;i<par;i++){
		printf("%i\n",a[i]);
	}
	
	printf("Numeros impares: \n");	
	for(i=0;i<impar;i++){
		printf("%i\n",b[i]);
	}
	
}
