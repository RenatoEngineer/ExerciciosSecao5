/*
 * ex004.c
 *
 *  Criado em: 2 de fev de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;

	for(numero = 0; numero <= 100000; numero += 1000){
		printf("%d\n", numero);
	}

	return 0;
}
