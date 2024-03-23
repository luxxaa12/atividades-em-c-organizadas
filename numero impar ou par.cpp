#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

int main(){
	int numero;
	
	printf("Digite um numero:");
	scanf("%i",&numero);
	
	
	
	
	printf("\nNumero apresentado: %.1i\n",numero);
	
	if(numero % 2 == 0){
		printf("\nO numero e par");
	}else{
	printf("\nO numero e impar");
	
	
}
}


