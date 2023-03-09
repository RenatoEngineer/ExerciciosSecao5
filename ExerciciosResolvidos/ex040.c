/*
 * ex040.c
 *
 *  Criado em: 9 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;
	int maior;
	int menor;

	printf("Digite um numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &numero);

	maior = numero;
	menor = numero;

	while(numero >= 0){
		if(numero > maior){
			maior = numero;
		}
		if(numero < menor){
			menor = numero;
		}
		printf("Digite outro numero Inteiro: ");
		fflush(stdout);
		scanf("%d", &numero);
	}

	printf("\nO Maior numero Lido foi: %d\n", maior);
	printf("O Menor numero Lido foi: %d", menor);

	return 0;
}
