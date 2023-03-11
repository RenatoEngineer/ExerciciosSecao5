/*
 * ex045.c
 *
 *  Criado em: 10 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>
#define KMH_PARA_MS 0.277778 //Fator de Conversao de Km/h para m/s

int main(){

	int opcao;
	float velocidade;

	do{
		printf("===================================\n=   .:: SELECIONE UMA OPCAO ::.   =\n===================================\n");
		printf("1 - Para Converter de Km/h para m/s\n");
		printf("2 - Para Converter de m/s para Km/h\n");
		printf("0 - Para Finalizar o Programa\n");
		printf("Opcao: ");
		fflush(stdout);
		scanf("%d", &opcao);

		switch(opcao){
		case 0:
			printf("PROGRAMA FINALIZADO!!!\n===================================\n");
			break;
		case 1:
			printf("Digite a Velocidade em Km/h: ");
			fflush(stdout);
			scanf("%f", &velocidade);
			printf("    %.2f Km/h = %.2f m/s\n===================================\n\n", velocidade, velocidade * KMH_PARA_MS);
			break;
		case 2:
			printf("Digite a Velocidade em m/s: ");
			fflush(stdout);
			scanf("%f", &velocidade);
			printf("    %.2f m/s = %.2f Km/h\n===================================\n\n", velocidade, velocidade / KMH_PARA_MS);
			break;
		default:
			printf("Opcao Invalida. Tente Novamente!!!\n===================================\n\n");
			break;
		}
		printf("\n");
	}while(opcao != 0);

	return 0;
}
