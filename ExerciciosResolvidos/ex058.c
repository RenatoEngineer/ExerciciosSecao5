/*
 * ex058.c
 *
 *  Criado em: 22 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int a;
	int b;
	int i;
	int j;
	int ehPrimo;
	int soma = 0;

	printf("Informe o Valor de a: ");
	fflush(stdout);
	scanf("%d", &a);

	printf("Informe o Valor de b: ");
	fflush(stdout);
	scanf("%d", &b);

	for(i = a; i <= b; i ++){
		ehPrimo = 1;
		for(j = 2; j <= i/2; j ++){
			if(i % j == 0){
				ehPrimo = 0;
				break;
			}
		}
		if(ehPrimo && i > 1){
			soma += i;
		}
	}

	printf("\nA Soma dos Numeros Primos no Intervalo %d e %d e: %d", a, b, soma);

	return 0;
}
