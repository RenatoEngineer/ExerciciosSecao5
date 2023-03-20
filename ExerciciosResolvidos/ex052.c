/*
 * ex052.c
 *
 *  Criado em: 20 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int valorSaque;
	int notas100 = 0;
	int notas50 = 0;
	int notas20 = 0;
	int notas10 = 0;
	int notas5 = 0;
	int notas2 = 0;
	int notas1 = 0;

	printf("Digite o Valor do Saque: R$ ");
	fflush(stdout);
	scanf("%d", &valorSaque);

	if(valorSaque > 0){
		while(valorSaque > 0){
			if(valorSaque >= 100){
				notas100 ++;
				valorSaque -= 100; //Diminui 100 da Variavel valorSaque
			}else{
				if(valorSaque >= 50){
					notas50 ++;
					valorSaque -= 50; //Diminui 50 da Variavel valorSaque
				}else{
					if(valorSaque >= 20){
						notas20 ++;
						valorSaque -= 20; //Diminui 20 da Variavel valorSaque
					}else{
						if(valorSaque >= 10){
							notas10 ++;
							valorSaque -= 10; //Diminui 10 da Variavel valorSaque
						}else{
							if(valorSaque >= 5){
								notas5 ++;
								valorSaque -= 5; //Diminui 5 da Variavel valorSaque
							}else{
								if(valorSaque >= 2){
									notas2 ++;
									valorSaque -= 2; //Diminui 2 da Variavel valorSaque
								}else{
									notas1 ++;
									valorSaque -= 1; //Diminui 1 da Variavel valorSaque
								}
							}
						}
					}
				}
			}
		}

		printf("\n.:: QUANTIDADE DE NOTAS ::.\n\n");

		if(notas100 > 0 && notas100 < 2){
			printf("%d Cedula de R$ 100\n", notas100);
		}else{
			if(notas100 > 1){
				printf("%d Cedulas de R$ 100\n", notas100);
			}
		}
		if(notas50 > 0 && notas50 < 2){
			printf("%d Cedula de R$ 50\n", notas50);
		}else{
			if(notas50 > 1){
				printf("%d Cedulas de R$ 50\n", notas50);
			}
		}
		if(notas20 > 0 && notas20 < 2){
			printf("%d Cedula de R$ 20\n", notas20);
		}else{
			if(notas20 > 1){
				printf("%d Cedulas de R$ 20\n", notas20);
			}
		}
		if(notas10 > 0 && notas10 < 2){
			printf("%d Cedula de R$ 10\n", notas10);
		}else{
			if(notas10 > 1){
				printf("%d Cedulas de R$ 10\n", notas10);
			}
		}
		if(notas5 > 0 && notas5 < 2){
			printf("%d Cedula de R$ 5\n", notas5);
		}else{
			if(notas5 > 1){
				printf("%d Cedulas de R$ 5\n", notas5);
			}
		}
		if(notas2 > 0 && notas2 < 2){
			printf("%d Cedula de R$ 2\n", notas2);
		}else{
			if(notas2 > 1){
				printf("%d Cedulas de R$ 2\n", notas2);
			}
		}
		if(notas1 > 0 && notas1 < 2){
			printf("%d Cedula de R$ 1\n", notas1);
		}else{
			if(notas1 > 1){
				printf("%d Cedulas de R$ 1\n", notas1);
			}
		}

	}else{
		printf("\nValor Invalido para Saque!!!");
	}

	return 0;
}
