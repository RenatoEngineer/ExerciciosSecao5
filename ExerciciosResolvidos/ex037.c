/*
 * ex037.c
 *
 *  Criado em: 7 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>
#include <math.h> //Biblioteca para usar a funcao "pow"

int main(){

	int numero;
	int primeiroDigito;
	int segundoDigito;
	int soma;

	for(numero = 1000; numero <= 9999; numero ++){
		primeiroDigito = numero / 100;
		segundoDigito = numero % 100;
		soma = primeiroDigito + segundoDigito;
		if(pow(soma, 2) == numero){ //Funcao "pow" eleva a variavel soma ao quadrado.
			printf("%d e um numero que possui a propriedade desejada\n", numero);
		}
	}

	return 0;
}
