/*
 * ex054.c
 *
 *  Criado em: 20 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int numero;
	int i;
	int loxa = 0;

	//Solicita ao Usuario um numero inteiro maior do que 1
	printf("Digite um Numero inteiro maior do que 1: ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero > 0){ //Verifica se o numero e maior que 0
		//Verifica se o numero e divisivel por algum numero no intervalo de 2 ate numero/2
		for(i = 2; i <= numero/2; ++ i){ //++ i pre-incremento.
			if(numero % i == 0){
				loxa = 1; //Caso o numero seja divisivel, define a loxa como 1 e interrompe o laco
				break;
			}
		}

		//Verifica se o numero e igual a 1, que nao e considerado primo
		if(numero == 1){
			printf("\n1 nao e um numero primo!!!");
		}else{
			if(loxa == 0){ //Caso a loxa seja 0, o numero e primo
				printf("\n%d e um numero primo!!!", numero);
			}else{ //Caso contrario, o numero nao e primo
				printf("\n%d nao e um numero primo!!!", numero);
			}
		}
	}else{
		printf("\n%d nao e um numero primo!!!", numero);
	}

	return 0;
}
