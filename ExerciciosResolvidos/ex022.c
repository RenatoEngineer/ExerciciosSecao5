/*
 * ex022.c
 *
 *  Criado em: 2 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int nota;
	int soma = 0;
	int contador = 0;
	float media;

	printf("Digite as Notas (Valores entre 10 e 20) e digite um valor Invalido para Encerrar: \n");
	fflush(stdout);

	do{
		scanf("%d", &nota);
		if(nota >= 10 && nota <= 20){
			soma += nota;
			contador ++;
		}
	}while(nota >= 10 && nota <=20);

	if(contador > 0){
		media = soma / contador;
		printf("\nA Media das Notas digitadas e: %.2f\n", media);
	}else{
		printf("\nNenhuma Nota Valida foi Digitada!!!");
	}

	return 0;
}
