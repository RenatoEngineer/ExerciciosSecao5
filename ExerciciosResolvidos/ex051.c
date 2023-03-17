/*
 * ex051.c
 *
 *  Criado em: 17 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int ano;
	double salario; //Para calcular ate 2023, o numero sera muito grande e por isso foi usado double.
	float percentual = 1.5; //1.5% em 1996

	//Salario em 1995

	salario = 2000;

	for(ano = 1996; ano <= 2023; ano ++){
		salario *= 1 + (percentual / 100);
		percentual *= 2; //Dobra o percentual de aumento

		printf("Salario em %d: R$ %.2lf\n", ano, salario); //%lf para imprimir variavel do tipo double
	}

	return 0;
}
