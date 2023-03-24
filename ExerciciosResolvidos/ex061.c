/*
 * ex061.c
 *
 *  Criado em: 23 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int maxPalindromo = 0;
	int maxNumero1 = 0;
	int maxNumero2 = 0;
	int num1;
	int num2;
	int produto;
	int palindromo;
	int temporaria;

	for(num1 = 100; num1 < 1000; num1 ++){
		for(num2 = 100; num2 < 1000; num2 ++){
			produto = num1 * num2;
			palindromo = 0;
			temporaria = produto;

			while(temporaria != 0){
				palindromo = palindromo * 10 + (temporaria % 10);
				temporaria /= 10; //E o mesmo que temporaria = temporaria /10
			}

			if(palindromo == produto && produto > maxPalindromo){
				maxPalindromo = produto;
				maxNumero1 = num1;
				maxNumero2 = num2;
			}
		}
	}

	printf("O maior Palindromo feito a partir do produto de dois numeros de 3 digitos e: %d = %d * %d\n", maxPalindromo, maxNumero1, maxNumero2);

	return 0;
}
