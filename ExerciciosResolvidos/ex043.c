/*
 * ex043.c
 *
 *  Criado em: 10 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int idade;
	int soma = 0;
	int contador = 0;
	float media;

	do{
		printf("Digite uma Idade ou Zero para Sair: ");
		fflush(stdout);
		scanf("%d", &idade);

		if(idade > 0){
			soma += idade; //E o mesmo que: soma = soma + idade;
			contador ++;
		}
	}while(idade != 0);

	if(contador > 0){
		media = (float) soma / contador;
		printf("A Idade Media do Grupo e: %.2f", media);
	}else{
		printf("Nenhuma Idade foi Informada!!!");
	}

	return 0;
}
