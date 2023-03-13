/*
 * ex047.c
 *
 *  Criado em: 13 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int opcao;
	float numero1;
	float numero2;
	float resultado;

	//Exibe o Menu de Opcoes
	do{
		printf(".:: ESCOLHA UMA DAS OPCOES ABAIXO ::.\n");
		printf("1- Adicao\n");
		printf("2- Subtracao\n");
		printf("3- Multiplicacao\n");
		printf("4- Divisao\n");
		printf("5- Sair\n");
		fflush(stdout);
		scanf("%d", &opcao);

		//Realiza a operacao escolhida
		switch(opcao){
		case 1: //Adicao
			printf("Digite o Primeiro Numero: ");
			fflush(stdout);
			scanf("%f", &numero1);
			printf("Digite o Segundo Numero: ");
			fflush(stdout);
			scanf("%f", &numero2);
			resultado = numero1 + numero2;
			printf("Resultado: %.2f\n\n", resultado);
			break;

		case 2: //Subtracao
			printf("Digite o Primeiro Numero: ");
			fflush(stdout);
			scanf("%f", &numero1);
			printf("Digite o Segundo Numero: ");
			fflush(stdout);
			scanf("%f", &numero2);
			resultado = numero1 - numero2;
			printf("Resultado: %.2f\n\n", resultado);
			break;

		case 3: //Multiplicacao
			printf("Digite o Primeiro Numero: ");
			fflush(stdout);
			scanf("%f", &numero1);
			printf("Digite o Segundo Numero: ");
			fflush(stdout);
			scanf("%f", &numero2);
			resultado = numero1 * numero2;
			printf("Resultado: %.2f\n\n", resultado);
			break;

		case 4: //Divisao
			printf("Digite o Primeiro Numero: ");
			fflush(stdout);
			scanf("%f", &numero1);
			printf("Digite o Segundo Numero: ");
			fflush(stdout);
			scanf("%f", &numero2);
			if(numero2 != 0){
				resultado = numero1 / numero2;
				printf("Resultado: %.2f\n\n", resultado);
			}else{
				printf("Nao e possivel dividir por Zero!");
			}
			break;

		case 5: //Sair
			printf("O Programa foi Encerrado!!!");
			break;

		default: //Opcao Invalida
			printf("Opcao Invalida!!! Tente Novamente\n\n");
			break;
		}

	}while(opcao != 5); //Repete o menu de opcoes ate a opcao Sair for escolhida

	return 0;
}
