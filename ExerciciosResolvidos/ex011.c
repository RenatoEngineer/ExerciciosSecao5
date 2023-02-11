/*
 * ex011.c
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

	printf("Digite um numero Inteiro Positivo: ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero > 0){
		printf("\nNumeros Naturais de 0 ate %d:\n\n", numero);

			for(contador = 0; contador <= numero; contador ++){
				printf("%d ", contador);
			}
	}else{
		printf("\nNumero Invalido!!!");
	}

	return 0;
}
