/*
 * ex009.c
 *
 *  Criado em: 10 de fev de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;
	int contador;

	contador = 1;

	printf("Digite um numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero > 0){
		while(numero != 0){
				if(contador %2 != 0){
					printf("%d ", contador);
					numero --;
				}

				contador ++;
			}
	}else{
		printf("\nNumero Invalido!!!");
	}

	return 0;
}
