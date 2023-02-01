/*
 * ex002.c
 *
 *  Criado em: 1 de fev de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;

	//Primeira estrutura de repeti��o - for
	printf("Primeira - Usando for!!!\n");

	for(numero = 1; numero <= 100; numero ++){
		printf("%d\n", numero);
	}

	//Segunda estrutura de repeti��o - while
	printf("\nSegunda - Usando while!!!\n");

	numero = 1;

	while(numero <= 100){
		printf("%d\n", numero ++);
	}

	//Terceira estrutura de repeti��o - do while
	printf("\nTerceira - Usando do while!!!\n");

	numero = 1;

	do{
		printf("%d\n", numero ++);
	}while(numero <= 100);

	return 0;
}
