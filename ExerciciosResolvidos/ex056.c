/*
 * ex056.c
 *
 *  Criado em: 20 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>
#include <math.h>

int main(){

	long int i;
	long int j;
	long int limite = 2000000;
	long int soma = 0;

	int primo;

	for(i = 2; i <= limite; i ++){
		primo = 1;
		for(j = 2; j <= sqrt(i); j ++){
			if(i % j == 0){
				primo = 0;
				break;
			}
		}
		if(primo == 1){
			soma += i;
		}
	}

	printf("A Soma dos Numeros primos abaixo de %ld e: %ld\n", limite, soma);

	return 0;
}
