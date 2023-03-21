/*
 * ex055.c
 *
 *  Criado em: 20 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int n;
	int numero = 2;
	int contador = 0;
	int soma = 0;
	int primo;
	int i;

	printf("Digite um Inteiro nao Negativo: ");
	fflush(stdout);
	scanf("%d", &n);

	if(n > 0){
		while(contador < n){ //Enquanto nao encontra um numero primo
			primo = 1;      //considera-se o numero atual como primo

			for(i = 2; i <= numero / 2; i ++){ //Verifica se o numero atual e primo
				if(numero % i == 0){ //Se o numero e divisivel por um numero entre 2 e sua metade, ele nao e primo
					primo = 0;
					break; //Interrompe o loop for, pois ja foi confirmado que o numero nao e primo
				}
			}

			if(primo){ //Se o numero e primo
				soma += numero; //adiciona o numero a soma
				contador ++; //Incrementa o contador de numeros primos encontrados
			}
			numero ++; //Testa o proximo numero
		}

		printf("\nA soma dos %d primeiros numeros primos e: %d", n, soma);
	}else{
		printf("\nNumero Invalido!!!");
	}

	return 0;
}
