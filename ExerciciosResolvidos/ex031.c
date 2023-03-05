/*
 * ex031.c
 *
 *  Criado em: 5 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	//Declaracao de Variaveis

	float soma = 0.0; //Variavel para Armazenar o Valor da Soma
	int i;			 //Variavel para o Indice do Loop

	//Laco para Somar os Termos

	for(i = 1; i <= 50; i ++){
		soma += (float) (2 * i - 1) / i;
	}

	printf("\nS = %f", soma);

	return 0;
}
