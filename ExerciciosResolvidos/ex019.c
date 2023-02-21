/*
 * ex019.c
 *
 *  Criado em: 21 de fev de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;
	int centena;
	int dezena;
	int unidade;

	printf("Digite um numero entre 100 e 999: ");
	fflush(stdout);
	scanf("%d", &numero);

	while(numero < 100 || numero > 999){
		printf("\nNumero Invalido!!!\nDigite um numero entre 100 e 999: ");
		fflush(stdout);
		scanf("%d", &numero);
	}

	centena = numero / 100;
	dezena = (numero - (centena * 100)) / 10;
	unidade = numero - (centena * 100 + dezena * 10);

	printf("\nOs algarismos que compoe o numero: %d sao: %d %d %d", numero, centena, dezena, unidade);

	return 0;
}
