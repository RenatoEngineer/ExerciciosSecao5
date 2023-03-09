/*
 * ex038.c
 *
 *  Criado em: 8 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int a;
	int b;
	int c;

	for(a = 1; a < 1000; a ++){
		for(b = a + 1; b < 1000; b++){
			c = 1000 - a - b;
			if(a * a + b * b == c * c){
				printf("O terno pitagorico a, b, c, para o qual a + b + c = 1000 e:\n");
				printf("a = %d, b = %d, c = %d", a, b, c);
			}
		}
	}

	return 0;
}
