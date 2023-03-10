/*
 * ex044.c
 *
 *  Criado em: 10 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;
	int a = 0;
	int b = 1;
	int c = 0;
	int d;

	printf("Digite um Numero Positivo: ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero > 0){
		printf("\nA Sequencia de Fibonacci ate %d e:\n", numero);

		while(c <= numero){
			printf("%d ", d);
			a = b;
			b = c;
			c = a + b;
			d = c + b;
		}

		printf("\n");
	}else{
		printf("\nNumero Invalido!!!");
	}

	return 0;
}
