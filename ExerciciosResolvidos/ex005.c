/*
 * ex005.c
 *
 *  Criado em: 5 de fev de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int contador;
	float numero;
	float soma = 0;

	for(contador = 0; contador < 10; contador ++){
		printf("Digite um Numero: ");
		fflush(stdout);
		scanf("%f", &numero);

		soma = soma + numero;
	}

	printf("\nA Soma e: %.2f", soma);

	return 0;
}
