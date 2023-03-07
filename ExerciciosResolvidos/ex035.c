/*
 * ex035.c
 *
 *  Criado em: 6 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int valorInicial;
	int valorFinal;
	int i;
	int soma = 0;

	printf("Digite o Valor Inicial: ");
	fflush(stdout);
	scanf("%d", &valorInicial);

	printf("Digite o Valor Final: ");
	fflush(stdout);
	scanf("%d", &valorFinal);

	if(valorFinal > valorInicial){
		for(i = valorInicial; i <= valorFinal; i ++){
			if(i % 2 != 0){
				soma += i;
			}
		}
		printf("\nA Soma dos Impares neste Intervalo e: %d", soma);
	}else{
		printf("\nIntervalo de Valores Invalido!!!");
	}

	return 0;
}
