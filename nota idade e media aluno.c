#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>


int main(){
	setlocale (LC_ALL,"");
	
	char nome[200];
	int idade;
	int i;
	float nota[i],soma = 0,media = 0;
	
	
	printf("Digite seu nome:");
	scanf("%s",&nome);
	
	printf("Digite sua idade:");
	scanf("%i",&idade);
	
	for(i = 1; i <= 4; i ++ ){
		printf("Digite a %iª nota:",i);
		scanf("%f",&nota[i]);
		
		soma += nota[i];
		
	}

	media = soma / 4;
	

	printf("\nNome :%s\n",nome);
	printf("\nIdade :%i\n",idade);
	for (i = 1;i <4;i++){
		printf("\n%iª nota: %.1f\n", i+ 0,nota[i]);
	}
	printf("\nMedia:%.1f",media);
}
