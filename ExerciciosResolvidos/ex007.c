/*
 * ex007.c
 *
 *  Criado em: 8 de fev de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int contador;
	int numero;
	int soma = 0;
	int media;

	printf("Digite 10 numeros Inteiros Positivos:\n\n");

	for(contador = 1; contador <= 10; contador ++){
		printf("Digite o %d numero: ", contador);
		fflush(stdout);
		scanf("%d", &numero);

		while(numero <= 0){
			printf("\nO numero digitado nao e Positivo!!!\n\nDigite o %d numero: ", contador);
			fflush(stdout);
			scanf("%d", &numero);
		}

		soma = soma + numero;
	}

	media = soma / 10;

	printf("\nA media dos numeros Positivos e: %d", media);

	return 0;
}
