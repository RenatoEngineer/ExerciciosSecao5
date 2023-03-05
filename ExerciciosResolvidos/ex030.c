/*
 * ex030.c
 *
 *  Criado em: 5 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int sequencia;
	int numero;
	int i;
	int soma = 0;
	int sinal = 1;

	printf(".:: ESCOLHA QUAL SEQUENCIA SERA CALCULADA ::.\n\n");
	printf("Digite 1 - Para 1+2+3+4+5+...+n\n");
	printf("Digite 2 - Para 1-2+3-4+5+...+(2n-1)\n");
	printf("Digite 3 - Para 1+3+5+7+...+(2n-1)\n\n");
	fflush(stdout);
	scanf("%d", &sequencia);

	switch(sequencia){

	case 1:
		printf("\nDigite um Numero Inteiro Positivo para N: ");
		fflush(stdout);
		scanf("%d", &numero);

		if(numero > 0){
			for(i = 1; i <= numero; i ++){
				soma += i;
			}
			printf("\nA soma de 1 a %d e: %d", numero, soma);
		}else{
			printf("\nNumero Invalido!!!\n");
		}
		break;

	case 2:
		printf("\nDigite um Numero Inteiro Positivo para N: ");
		fflush(stdout);
		scanf("%d", &numero);

		if(numero > 0){
			for(i = 1; i <= (2 * numero - 1); i += 2){
				soma += sinal * i;
				sinal *= -1;
			}
			printf("\nA soma de 1-2+3-4+5+...+(2n-1) e: %d", soma);
		}else{
			printf("\nNumero Invalido!!!");
		}
		break;

	case 3:
		printf("\nDigite um Numero Inteiro Positivo para N: ");
		fflush(stdout);
		scanf("%d", &numero);

		if(numero > 0){
			for(i = 1; i <= (2 * numero - 1); i += 2){
				soma += i;
			}
			printf("\nA soma de 1+3+5+7+...+(2n-1) e: %d", soma);
		}else{
			printf("\nNumero Invalido!!!");
		}
		break;

	default:
		printf("\nNumero Invalido!!!\nFavor digitar um numero entre 1 e 3!!!");

	}

	return 0;
}
