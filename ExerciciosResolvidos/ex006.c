/*
 * ex006.c
 *
 *  Criado em: 5 de fev de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;
	int contador;
	int soma = 0;
	int media;

	for(contador = 0; contador < 10; contador ++){
		printf("Digite um numero: ");
		fflush(stdout);
		scanf("%d", &numero);

		soma = soma + numero;
	}

	media = soma / 10;

	printf("\nA soma dos numeros digitados e: %d", soma);

	printf("\n\nA media dos numeros digitados e: %d", media);

	return 0;
}
