/*
 * ex032.c
 *
 *  Criado em: 5 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	//Declaracao de Variaveis

	int numero; //Numero de Lancamentos
	int i;     //Indice do Loop
	int d1;   //Valor d1
	int d2;  //Valor d2

	srand(time(NULL)); //Inicia para gerar numeros aleatorios

	printf("Digite o numero de Lancamentos: ");
	fflush(stdout);        //Necessario para Bug do eclipse em Windows. No eclipse em Linux nao e necessario.
	scanf("%d", &numero); //Le e Armazena o numero digitado na Variavel numero

	//Realiza N lancamento dos dados

	for(i = 1; i <= numero; i ++){
		d1 = rand() % 9 + 1;  //Gera um numero aleatorio entre 1 e 9 para o dado 1
		d2 = rand() % 9 + 1; //Gera um numero aleatorio entre 1 e 9 para o dado 2

		printf("\nLancamento %d:\nd1 = %d\nd2 = %d\n", i, d1, d2);

		if(d1 > d2){
			printf("d1 > d2\n");
		}else{
			if(d1 < d2){
				printf("d1 < d2\n");
			}else{
				printf("d1 = d2\n");
			}
		}
	}

	return 0;
}
