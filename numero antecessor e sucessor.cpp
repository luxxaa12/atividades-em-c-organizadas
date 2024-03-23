#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>


int main(){
	
	int numero;
	
	printf("Digite um numero");
	scanf("%i",&numero);
	
	printf("\nO numero digitado foi: %i\n",numero);
	printf("\nO seu sucessor e: % i\n",numero + 1);
	printf("\nO seu numero antecessor e: %i\n",numero - 1);
}
