/*
 * ex050.c
 *
 *  Criado em: 14 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	float chico = 1.5; //Altura Chico
	float ze = 1.1;   //Altura Ze
	int anos = 0;    //Contagem de Anos

	while (chico >= ze){
		chico += 0.02; //2 cm por ano. Que e o mesmo que: chico = chico + 0.02
		ze += 0.03;   //3 cm por ano. Que e o mesmo que: ze = ze + 0.03
		anos ++;
	}

	printf("Serao necessarios %d anos para que Ze seja maior que Chico!", anos);

	return 0;
}
