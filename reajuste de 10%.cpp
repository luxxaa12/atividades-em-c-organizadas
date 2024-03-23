#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>


int main(){
	float valor,valorcomreajuste;
	
	printf("Digite um valor qulaquer:");
	scanf("%f",&valor);
	
	valorcomreajuste = valor * 0.1;
	
	printf("======Exibindo resultados ====");
	printf("\nO valor informado foi: %.1f",valor);
	printf("\nO valor com reajuste fica: %.1f",valor + valorcomreajuste);
}
