#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcKW(float salario_min, float qtd_kW, float *vlr_kW, float *vlr_conta, float *vlr_conta_f){
	(*vlr_kW) = salario_min * 0.001;
	(*vlr_conta) = (*vlr_kW) * qtd_kW;
	(*vlr_conta_f) = (*vlr_conta) * (1-0.15);
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float salario_min, qtd_kW, vlr_kW, vlr_conta, vlr_conta_f;
	
	printf("Informe o salário mínimo:\n");
	scanf("%f", &salario_min);
	printf("Informe o qtd de kW consumida:\n");
	scanf("%f", &qtd_kW);
	
	calcKW(salario_min, qtd_kW, &vlr_kW, &vlr_conta, &vlr_conta_f);
	
	printf("\nValor de 1kW: %.2f.\n", vlr_kW);
	printf("Valor a ser pago (em R$): %.2f.\n", vlr_conta);	
	printf("Valor com desconto de (em R$): %.2f.\n", vlr_conta_f);
	
	system("pause");
	return 0;
}
