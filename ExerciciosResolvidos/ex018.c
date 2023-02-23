/*
 * ex018.c
 *
 *  Criado em: 23 de fev de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main() {
    int quantidade;
	int numero;
	int maior = 0;
	int contMaior = 0;
	int contador;
	int ordinal = 176; //Tabela ASCII

    printf("Digite a quantidade de numeros: ");
    fflush(stdout);
    scanf("%d", &quantidade);

    for (contador = 1; contador <= quantidade; contador++) {
        printf("Digite o %d%c numero: ", contador, ordinal);
        fflush(stdout);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
            contMaior = 1;
        } else if (numero == maior) {
            contMaior++;
        }
    }

	if(contMaior > 1){
		printf("\nO maior numero e: %d \nEle foi lido: %d vezes", maior, contMaior);
	}else{
		printf("\nO maior numero e: %d \nEle foi lido: %d vez", maior, contMaior);
	}

    return 0;
}
