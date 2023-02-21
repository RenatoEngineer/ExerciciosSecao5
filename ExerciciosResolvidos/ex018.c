/*
 * ex018.c
 *
 *  Criado em: 21 de fev de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int qtNumero;
	int maior = 0;
	int numero[100];
	int contador1;
	int contador2;
	int contador3;
	int contadorVezes = 0;
	int ordinal = 176; //Tabela ASCII

	printf("Digite a quantidade de Numeros que serao Digitados: ");
	fflush(stdout);
	scanf("%d", &qtNumero);

	for(contador1 = 0; contador1 < qtNumero; contador1++){
		printf("Digite o numero %d%c: ", contador1+1, ordinal);
		fflush(stdout);
		scanf("%d", &numero[contador1]);
		maior = numero[contador1];
	}

	for(contador2 = 0; contador2 < qtNumero; contador2++){
		if(numero[contador2] > maior){
			maior = numero[contador2];
		}
	}

	for(contador3 = 0; contador3 < qtNumero; contador3++){
		if(numero[contador3] == maior){
			contadorVezes++;
		}
	}

	if(contadorVezes > 1){
		printf("\nO maior numero e: %d \nEle foi lido: %d vezes", maior, contadorVezes);
	}else{
		printf("\nO maior numero e: %d \nEle foi lido: %d vez", maior, contadorVezes);
	}

	return 0;
}
