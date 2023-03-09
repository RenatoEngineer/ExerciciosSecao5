/*
 * ex039.c
 *
 *  Criado em: 9 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	float base;
	float altura;
	float area;

	do{
		printf("Digite a Base do Triangulo (Maior que Zero): ");
		fflush(stdout);
		scanf("%f", &base);
	}while(base <= 0);

	printf("\n");

	do{
		printf("Digite a Altura do Triangulo (Maior que Zero): ");
		fflush(stdout);
		scanf("%f", &altura);
	}while(altura <= 0);

	area = (base * altura) / 2;

	printf("\nA Area do Triangulo e: %.2f", area);

	return 0;
}
