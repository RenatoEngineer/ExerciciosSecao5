/*
 * ex017.c
 *
 *  Criado em: 14 de fev de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int contador;
	int numero;
	int soma = 0;

	printf("Digite um Numero Inteiro Positivo: ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero > 0){
		for(contador = 0; contador <= numero; contador ++){
			soma = soma + contador;
		}
		printf("\nA soma dos %d primeiros Numeros Naturais e: %d", numero, soma);
	}else{
		printf("\nNumero Invalido!!!");
	}

	return 0;
}
