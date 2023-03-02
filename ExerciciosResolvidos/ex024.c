/*
 * ex024.c
 *
 *  Criado em: 2 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;
	int soma = 0;
	int contador = 0;

	printf("Digite um numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &numero);

	printf("\nOs Divisores de %d sao: ", numero);

	for(contador = 1; contador <= numero; contador ++){
		if(numero % contador == 0){
			soma += contador;
			printf("%d ", contador);
		}
	}

	printf("\n\nA soma dos Divisores de %d (Com Excessao dele proprio) e: %d", numero, soma);

	return 0;
}
