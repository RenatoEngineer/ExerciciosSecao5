/*
 * ex062.c
 *
 *  Criado em: 24 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int i;
	int numero;
	int soma = 0;

	for(i = 1; i <= 1000; i ++){
		numero = i;
		if(numero == 1000){
			soma += printf("mil");
			continue;
		}
		if(numero >= 100){
			switch(numero / 100){
				case 1:
					soma += printf("cento");
					break;
				case 2:
					soma += printf("duzentos");
					break;
				case 3:
					soma += printf("trezentos");
					break;
				case 4:
					soma += printf("quatrocentos");
					break;
				case 5:
					soma += printf("quinhentos");
					break;
				case 6:
					soma += printf("seiscentos");
					break;
				case 7:
					soma += printf("setecentos");
					break;
				case 8:
					soma += printf("oitoentos");
					break;
				case 9:
					soma += printf("novecentos");
					break;
			}
			numero %= 100;
			if(numero > 0){
				soma += printf("e");
			}
		}
		if(numero >= 10 && numero <= 19){
			switch(numero){
			case 10:
				soma += printf("dez");
				break;
			case 11:
				soma += printf("onze");
				break;
			case 12:
				soma += printf("doze");
				break;
			case 13:
				soma += printf("treze");
				break;
			case 14:
				soma += printf("quatorze");
				break;
			case 15:
				soma += printf("quinze");
				break;
			case 16:
				soma += printf("dezesseis");
				break;
			case 17:
				soma += printf("dezessete");
				break;
			case 18:
				soma += printf("dezoito");
				break;
			case 19:
				soma += printf("dezenove");
				break;
			}
			continue;
		}else{
			if(numero == 100){
				soma += printf("cem");
				continue;
			}else{
				if(numero >= 20 || numero == 0){
					switch(numero / 10){
					case 2:
						soma += printf("vinte");
						break;
					case 3:
						soma += printf("trinta");
						break;
					case 4:
						soma += printf("quarenta");
						break;
					case 5:
						soma += printf("cinquenta");
						break;
					case 6:
						soma += printf("sessenta");
						break;
					case 7:
						soma += printf("setenta");
						break;
					case 8:
						soma += printf("oitenta");
						break;
					case 9:
						soma += printf("noventa");
						break;
					}
					numero %= 10;
					if(numero > 0){
						soma += printf("e");
					}
				}
				if(numero > 0 && numero < 10){
					switch(numero){
					case 1:
						soma += printf("um");
						break;
					case 2:
						soma += printf("dois");
						break;
					case 3:
						soma += printf("tres");
						break;
					case 4:
						soma += printf("quatro");
						break;
					case 5:
						soma += printf("cinco");
						break;
					case 6:
						soma += printf("seis");
						break;
					case 7:
						soma += printf("sete");
						break;
					case 8:
						soma += printf("oito");
						break;
					default:
						soma += printf("nove");
						break;
					}
				}
			}
		}
	}

	printf("\n\nA Quantidade de Letras necessarias para escrever todos os numeros de 1 a 1000 e: %d", soma);

	return 0;
}
