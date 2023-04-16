#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float CalcSalarioLiquido(float n_hrs, float salario_min){
	float salarioBruto, hrs_trab, imposto;
	hrs_trab = salario_min/2;
	salarioBruto = n_hrs*hrs_trab;
	imposto = salarioBruto*0.03;
	return salarioBruto - imposto;
}


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float n_hrs, salario_min, salario;
	
	printf("Informe o número de horas trabalhadas:\n");
	scanf("%f", &n_hrs);
		printf("Informe o valor do salario munimo:\n");
	scanf("%f", &salario_min);
	
	salario = CalcSalarioLiquido(n_hrs, salario_min);
	
	printf("\nSálario a receber: %.2f.\n", salario);
	
	system("pause");
	return 0;
}
