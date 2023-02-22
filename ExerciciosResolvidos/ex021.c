/*
 * ex021.c
 *
 *  Criado em: 21 de fev de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero1;
	int numero2;
	int contador;
	int par;
	int soma = 0;
	int multiplicacao = 1;

	printf("Digite o Primeiro Numero: ");
	fflush(stdout);
	scanf("%d", &numero1);

	printf("\nDigite o Segundo Numero: ");
	fflush(stdout);
	scanf("%d", &numero2);

	if(numero1 < numero2){
		for(contador = numero1; contador <= numero2; contador++){
			printf("%d ", contador);
			par = contador % 2;

			if(par == 0){
				printf("e par\n");
				soma = soma + contador;
			}else{
				printf("e impar\n");
				multiplicacao = multiplicacao * contador;
			}
		}
		printf("\nA Soma dos Pares e: %d\n", soma);
		printf("A Multiplicacao dos Impares e: %d", multiplicacao);
	}else{
		for(contador = numero1; contador >= numero2; contador--){
			printf("%d ", contador);
			par = contador % 2;

			if(par == 0){
				printf("e par\n");
				soma = soma + contador;
			}else{
				printf("e impar\n");
				multiplicacao = multiplicacao * contador;
			}
		}
		printf("\nA Soma dos Pares e: %d\n", soma);
		printf("A Multiplicacao dos Impares e: %d", multiplicacao);
	}

	return 0;
}
