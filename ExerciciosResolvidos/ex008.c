/*
 * ex008.c
 *
 *  Criado em: 10 de fev de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int contador;
	float numero;
	float numeroMaior;
	float numeroMenor;

	printf("Digite o 1 numero: ");
	fflush(stdout);
	scanf("%f", &numero);

	numeroMaior = numero;
	numeroMenor = numero;

	for(contador = 2; contador <= 10; contador ++){
		printf("Digite o %d numero: ", contador);
		fflush(stdout);
		scanf("%f", &numero);

		if(numero > numeroMaior){
			numeroMaior = numero;
		}else{
			if(numero < numeroMenor){
				numeroMenor = numero;
			}
		}
	}

	printf("\nO Maior numero digitado e: %.2f", numeroMaior);
	printf("\nO Menor numero digitado e: %.2f", numeroMenor);

	return 0;
}
