/*
 * ex059.c
 *
 *  Criado em: 23 de mar de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer
 */

#include <stdio.h>

int main(){

	int habitantes;
	int codigo;
	int consumo;
	int i;
	float kwh;
	float mediaConsumo;
	float totalResidencial = 0;
	float totalComercial = 0;
	float totalIndustrial = 0;
	float maiorConsumo = 0;
	float menorConsumo = 99999999;

	printf("Informe o Numero de Habitantes da Cidade: ");
	fflush(stdout);
	scanf("%d", &habitantes);

	printf("Informe o Valor do kwh: R$ ");
	fflush(stdout);
	scanf("%f", &kwh);

	for(i = 1; i <= habitantes; i ++){
		printf("Informe o Consumo do Habitante %d: ", i);
		fflush(stdout);
		scanf("%d", &consumo);

		if(consumo > maiorConsumo){
			maiorConsumo = consumo;
		}

		if(consumo < menorConsumo){
			menorConsumo = consumo;
		}

		printf("\n.:: INFORME O CODIGO DO CONSUMIDOR ::.\n1-Residencial\n2-Comercial\n3-Industrial\n");
		fflush(stdout);
		scanf("%d", &codigo);

		switch(codigo){
		case 1:
			totalResidencial += consumo;
			break;
		case 2:
			totalComercial += consumo;
			break;
		case 3:
			totalIndustrial += consumo;
			break;
		default:
			printf("\nCodigo Invalido!!! Tente Novamente\n");
			i --;
			break;
		}
	}

	mediaConsumo = (totalResidencial + totalComercial + totalIndustrial) / habitantes;

	printf("\nMaior Consumo: %.f kwh = R$ %.2f\n", maiorConsumo, maiorConsumo * kwh);
	printf("Menor Consumo: %.f kwh = R$ %.2f\n", menorConsumo, menorConsumo * kwh);
	printf("Media de Consumo: %.2f kwh = R$ %.2f\n", mediaConsumo, mediaConsumo * kwh);
	printf("Total de Consumo Residencial: %.2f kwh = R$ %.2f\n", totalResidencial, totalResidencial * kwh);
	printf("Total de Consumo Comercial: %.2f kwh = R$ %.2f\n", totalComercial, totalComercial * kwh);
	printf("Total de Consumo Industrial: %.2f kwh = R$ %.2f", totalIndustrial, totalComercial * kwh);

	return 0;
}
