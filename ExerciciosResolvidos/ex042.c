/*
 * ex042.c
 *
 *  Criado em: 10 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>
#include <math.h>

int main(){

	float numero;

	do{
		printf("Digite um Numero: ");
		fflush(stdout);
		scanf("%f", &numero);

		if(numero > 0){
			printf("Quadrado: %.2f\n", pow(numero, 2));
			printf("Cubo: %.2f\n", pow(numero, 3));
			printf("Raiz Quadrada: %.2f\n", sqrt(numero));
			printf("\n");
		}
	}while(numero > 0);

	printf("Programa Finalizado!!!");

	return 0;
}
