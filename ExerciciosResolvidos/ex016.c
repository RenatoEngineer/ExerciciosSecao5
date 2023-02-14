/*
 * ex016.c
 *
 *  Criado em: 14 de fev de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;
	int contador;

	printf("Digite um Numero Inteiro Positivo Impar: ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero > 0 && numero %2 != 0){
		for(contador = numero; contador >= 1; contador = contador - 2){
			printf("%d ", contador);
		}
	}else{
		printf("\nNumero Invalido");
	}

	return 0;
}
