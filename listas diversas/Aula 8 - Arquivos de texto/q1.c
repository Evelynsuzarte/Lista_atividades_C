#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *numeros,*par,*impar;
	int n;
	
	numeros = fopen("numeros.txt","r");
	while(numeros != '\0'){
		fscanf(numeros,"%i",&n);
		
		if(n%2 == 0){
			par = fopen("par.txt","a");
			fprintf(par,"%i ",n);
			fclose(par);
		}else{
			impar = fopen("impar.txt","a");
			fprintf(impar,"%i ",n);
			fclose(impar);	
		}
			
	}
}
