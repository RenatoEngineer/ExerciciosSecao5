/*
 * ex027.c
 *
 *  Criado em: 5 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;
	int i;
	float hn = 0.0;

	printf("Digite um Numero Inteiro e Positivo: ");
	fflush(stdout);//Necessário para Bug do eclipse em Windows
	scanf("%d", &numero);

	for(i = 1; i <= numero; i ++){
		hn += 1.0/i;
	}

	printf("\nH(%d) = %.2f", numero, hn);

	return 0;
}
