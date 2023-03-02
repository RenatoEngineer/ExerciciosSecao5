/*
 * ex023.c
 *
 *  Criado em: 2 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;
	int contador = 0;

	printf("Digite um numero Positivo: ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero > 0){
		printf("\nOs Divisores de %d sao: ", numero);
		for(contador = 1; contador <= numero; contador ++){
			if(numero % contador == 0){
				printf("%d ", contador);
			}
		}

	}else{
		printf("\nNumero Invalido!!!");
	}

	return 0;
}
