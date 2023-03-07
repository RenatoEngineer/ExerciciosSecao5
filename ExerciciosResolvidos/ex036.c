/*
 * ex036.c
 *
 *  Criado em: 6 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero = 100;
	int somaQuadrados = 0;
	int soma = 0;
	int i;
	int quadradoSoma;
	int diferenca;

	//Calcula a soma dos quadrados

	for(i = 1; i <= numero; i ++){
		somaQuadrados += i * i;
	}

	//Calcula a soma
	for(i = 1; i <= numero; i ++){
		soma += i;
	}

	//Calcula o quadrado da soma;
	quadradoSoma = soma * soma;

	//Calcula a diferenca

	diferenca = quadradoSoma - somaQuadrados;

	printf("A diferença entre a soma dos quadrados dos %d primeiros numeros naturais e o quadrado da soma e: %d", numero, diferenca);

	return 0;
}
