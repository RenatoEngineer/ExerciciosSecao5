/*
 * ex033.c
 *
 *  Criado em: 5 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int n;
	int i;
	int j;
	int k;  //Indice do Loop
	int contador = 0;

	printf("Digite o Valor de n: ");
	fflush(stdout);//Necessario para Bug do eclipse em Windows. No eclipse em Linux nao e necessario.
	scanf("%d", &n);

	printf("Digite o Valor de i: ");
	fflush(stdout);
	scanf("%d", &i);

	printf("Digite o Valor de j: ");
	fflush(stdout);
	scanf("%d", &j);

	printf("\nOs %d primeiros numeros multiplos de %d ou %d sao:\n", n, i, j);

	for(k = 0; contador < n; k ++){
		if((k % i == 0) || (k % j == 0)){
			printf("%d, ", k);
			contador ++;
		}
	}

	return 0;
}
