#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//EXERCICIO 1
int main(){
	
	int vet[6], i, par, impar;
	
	impar = 0;
	par = 0;
	for(i=0; i<=6; i++){//inicio for
		printf("Digite os numeros: ");
		scanf(%i, &vet[i]);
		if (vet[i]%2 == 0){//inicio if
			par ++;			
		}//fim if
		else
			impar++;
	}//fim for
	printf("\nPar: %i", par);
	printf("\nImpar: %i", impar);
	
	getche();
	return 0;
}
