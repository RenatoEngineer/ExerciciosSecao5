/*
 * ex041.c
 *
 *  Criado em: 10 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	float r;
	float r1;
	float r2;

	do{
		printf("Digite o Valor de R1 (Ou Zero para sair): ");
		fflush(stdout);
		scanf("%f", &r1);

		if(r1 == 0){ //Verifica se foi digitado 0 para encerrar o Loop
			printf("Programa Finalizado!!!");
			break;
		}

		printf("Digite o Valor de R2: ");
		fflush(stdout);
		scanf("%f", &r2);

		r = r1 * r2 / (r1 + r2);

		printf("A Resistencia equivalente e: %.2f\n\n", r);
	}while(r1 != 0); //Continua pedindo ao Usuario para digitar R1 e R2

	return 0;
}
