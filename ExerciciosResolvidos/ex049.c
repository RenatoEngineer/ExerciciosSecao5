/*
 * ex049.c
 *
 *  Criado em: 14 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	float salarioCarlos;
	float salarioJoao;
	float rendimentoPoupanca;
	float rendimentoFundo;
	int meses = 0;

	printf("Informe o Salario de Carlos: R$ ");
	fflush(stdout);
	scanf("%f", &salarioCarlos);
	salarioJoao = salarioCarlos / 3.0; //Joao recebe um terco do salario de Carlos
	printf("O Salario de Joao e: R$ %.2f\n\n", salarioJoao);

	printf("Informe a Taxa de Rendimento da Poupanca em Porcentagem: ");
	fflush(stdout);
	scanf("%f", &rendimentoPoupanca);
	rendimentoPoupanca /= 100.0; //Converte a taxa de Porcentagem para decimal

	printf("Informe a Tasa de Rendimento do Fundo de Renda Fixa em Porcentagem: ");
	fflush(stdout);
	scanf("%f", &rendimentoFundo);
	rendimentoFundo /= 100.0; //Converte a taxa de Porcentagem para decinal

	while(salarioJoao <= salarioCarlos){
		salarioCarlos *= 1 + rendimentoPoupanca; //Atualiza o salario de Carlos com o rendimento da poupanca
		salarioJoao *= 1 + rendimentoFundo; //Atualiza o salario de Joao com o rendimento do fundo de renda fixa
		meses ++;
	}

	printf("\nLevara %d meses para que o Valor pertencente a Joao iguale ou ultrapasse o valor pertencente a Carlos", meses);

	return 0;
}
