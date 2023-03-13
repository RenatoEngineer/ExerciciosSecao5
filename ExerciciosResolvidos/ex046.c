/*
 * ex046.c
 *
 *  Criado em: 13 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>
#include <stdlib.h> //Contem as Funcoes "rand" e "srand"
#include <time.h>  //Obtem o tempo atual do sistema para gerar uma semente unica para a funcao "srand"

int main(){

	int numeroAleatorio;
	int chute;
	int tentativas = 0;

	srand(time(0)); //Inicializa o gerador de numeros aleatorios

	numeroAleatorio = rand() % 1000 + 1; //Gera um numero aleatorio de 1 a 1000

	printf(".:: TENTE ADVINHAR O NUMERO ENTRE 1 E 1000 ::.\n\n");

	do{
		printf("Digite seu Chute: ");
		fflush(stdout);
		scanf("%d", &chute);
		tentativas ++;

		if(chute < numeroAleatorio){
			printf("Seu Chute e Menor que o Numero Gerado!\n\n");
		}else{
			if(chute > numeroAleatorio){
				printf("Seu Chute e Maior que o Numero Gerado!\n\n");
			}
		}
	}while(chute != numeroAleatorio);

	printf("Parabens!!! Voce acertou o Numero em %d Tentativas!!!", tentativas);

	return 0;
}
