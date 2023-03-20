/*
 * ex053.c
 *
 *  Criado em: 20 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int n;
	int contador = 1;
	int i;
	int j;

	printf("Digite um Numero Inteiro Positivo: ");
	fflush(stdout);
	scanf("%d", &n);

	if(n > 0){
		for(i = 1; i <= n; i ++){ //Controla as Linhas do Triangulo
			for(j = 1; j <= i; j++){ //Controla a quantidade de Numeros em cada Linha
				printf("%d ", contador);
				contador ++;
			}
			printf("\n"); //Quebra de Linha
		}
	}else{
		printf("\nNumero Invalido!!!");
	}

	return 0;
}
