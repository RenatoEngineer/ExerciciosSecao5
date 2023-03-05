/*
 * ex034.c
 *
 *  Criado em: 5 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int i;
	int numero = 1;
	int testeNumero;

	while(1){
		testeNumero = 1;
		for(i = 1; i <= 20; i ++){
			if(numero % i != 0){
				testeNumero = 0;
				break;
			}
		}
		if(testeNumero == 1){
			printf("%d, e o menor número que pode ser dividido por cada um dos números de 1 a 20, sem sobrar resto.", numero);
			break;
		}
		numero ++;
	}

	return 0;
}
