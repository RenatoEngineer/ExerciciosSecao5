/*
 * ex020.c
 *
 *  Criado em: 21 de fev de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;
	int contador = 0;
	int nPares = 0;

	printf("Digite um numero ou 1000 para parar: ");
	fflush(stdout);
	scanf("%d", &numero);

	while(numero != 1000){
		contador++;
		if(numero % 2 == 0){
			nPares++;
			printf("O numero %d e par\n", numero);
		}else{
			printf("O numero %d e impar\n", numero);
		}

		printf("Digite um numero ou 1000 para parar: ");
		fflush(stdout);
		scanf("%d", &numero);
	}

	if(nPares > 1 && contador > 1){
		printf("\nForam digitados %d numeros\nOnde %d eram Pares", contador, nPares);
	}else{
		if(nPares == 1 && contador == 1){
			printf("\nFoi digitado %d numero\nE este numero e Par", contador);
		}else{
			if(nPares == 1 && contador > 1){
				printf("\nForam digitados %d numeros\nOnde somente %d e Par", contador, nPares);
			}else{
				printf("\nVoce Encerrou o programa sem digitar um numero!!!");
			}
		}
	}

	return 0;
}
