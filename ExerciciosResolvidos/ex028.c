/*
 * ex028.c
 *
 *  Criado em: 5 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;
	int i;
	int j;
	float fatorial;
	float E = 1.0;

	printf("Digite um valor Inteiro e Positivo: ");
	fflush(stdout);//Necessario para Bug do eclipse em Windows. No eclipse em Linux nao e necessario.
	scanf("%d", &numero);

	for(i = 1; i <= numero; i ++){
		fatorial = 1.0;
		for(j = 1; j <= i; j++){
			fatorial *= j;
		}
		E += 1.0 / fatorial;
	}

	printf("\nO Valor de E e: %.2f", E);

	return 0;
}
