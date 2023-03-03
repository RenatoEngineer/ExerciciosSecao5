/*
 * ex026.c
 *
 *  Criado em: 3 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;
	int multiplo;
	int contador;

	printf("Digite um Numero Inteiro: ");
	fflush(stdout);//Necessario para Bug do eclipse em Windows
	scanf("%d", &numero);

	for(contador = numero + 1; ;contador ++){
		if(contador % 11 == 0 || contador % 13 == 0 || contador % 17 == 0){
			multiplo = contador;
			break;
		}
	}

	printf("\nO primeiro multiplo de 11, 13 ou 17 apos %d é: %d\n", numero, multiplo);

	return 0;
}
