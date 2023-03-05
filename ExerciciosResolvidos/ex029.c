/*
 * ex029.c
 *
 *  Criado em: 5 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int i;
	int j;
	float fatorial;
	float S = 0.0;

	for(i = 0; i <= 5; i++){
		fatorial = 1.0;
		for(j = 1; j <= (2 * i + 2); j++){
			fatorial *= j;
		}
		S += i / fatorial;
	}

	printf("O Valor da Serie e: %.2f", S);

	return 0;
}
