/*
 * ex048.c
 *
 *  Criado em: 13 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int limite = 4000000;
	int numero1 = 0;
	int numero2 = 1;
	int fibonacci = 0;
	int soma = 0;

	while(fibonacci <= limite){
		if(fibonacci % 2 == 0){
			soma += fibonacci;
		}
		fibonacci = numero1 + numero2;
		numero1 = numero2;
		numero2 = fibonacci;
	}

	printf("A soma dos Termos de valor Par da Sequencia de Fibonacci ate %d e: %d", limite, soma);

	return 0;
}
