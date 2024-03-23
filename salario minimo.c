#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

int main (){
	float salario,qtdsalario,salariominimo = 1412;
	
	printf("Digite o seu salario:");
	scanf("%f",&salario);
	
	qtdsalario = salario / salariominimo;
	
	printf("====== Exibindo resultados =====");
	printf("\nO salario informado: %.1f\n",salario);
	printf("\nA quantidade em salarios minimos e: %.1f\n",qtdsalario);
	
	
	
}
