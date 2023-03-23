/*
 * ex060.c
 *
 *  Criado em: 23 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;
	int quantidade = 0;
	int soma = 0;
	int maior = 0;
	int menor = 0;
	int somaPares = 0;
	int quantidadePares = 0;
	float media;
	float mediaPares;

	printf("Digite um Numero ou 0 para Sair: ");
	fflush(stdout);
	scanf("%d", &numero);

	while(numero != 0){
		soma += numero;
		quantidade ++;

		if(quantidade == 1 || numero > maior){
			maior = numero;
		}

		if(quantidade == 1 || numero < menor){
			menor = numero;
		}

		if(numero % 2 == 0){
			somaPares += numero;
			quantidadePares ++;
		}

		printf("Digite um Numero ou 0 para Sair: ");
		fflush(stdout);
		scanf("%d", &numero);
	}

	if(quantidade > 0){
		media = (float) soma / quantidade; //Foi usado (float) para converter o tipo de Variavel
	}

	if(quantidadePares > 0){
		mediaPares = (float) somaPares / quantidadePares; //Foi usado (float) para converter o tipo de Variavel
	}

	printf("\nA Soma dos Numeros Digitados e: %d\n", soma);
	printf("A quantidade de Numeros Digitados e: %d\n", quantidade);
	printf("A Media dos Numeros Digitados e: %.2f\n", media);
	printf("O Maior Numero Digitado foi: %d\n", maior);
	printf("O Menor Numero Digitado foi: %d\n", menor);
	printf("A Media dos Numeros Pares e: %.2f\n", mediaPares);

	return 0;
}
