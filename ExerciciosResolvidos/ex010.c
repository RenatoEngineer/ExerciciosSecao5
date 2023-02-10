/*
 * ex010.c
 *
 *  Criado em: 10 de fev de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int contador;
	int soma;

	soma = 0;

	printf("Os Primeiros 50 Numeros Pares sao:\n\n");

	for(contador = 1; contador <= 100; contador ++){
		if(contador %2 == 0){
			printf("%d ", contador);
			soma += contador;
		}
	}

	printf("\n\nA soma dos 50 primeiros numeros pares e: %d", soma);

	return 0;
}
